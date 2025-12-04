return {
	"nvimtools/none-ls.nvim",
	config = function()
		local null_ls = require("null-ls")

		null_ls.setup({
			sources = {
				null_ls.builtins.formatting.clang_format.with({
					extra_args = {
						"--style={BasedOnStyle: llvm, ReflowComments: false}",
					},
				}),
				null_ls.builtins.formatting.stylua,
			},
		})
		vim.keymap.set("n", "<leader>lf", function()
			vim.lsp.buf.format({
				async = true,
				filter = function(client)
					return client.name == "null-ls" or client.name == "none-ls"
				end,
			})
		end, { desc = "LSP: Format buffer" })
	end,
}
