return {
	"WhoIsSethDaniel/mason-tool-installer.nvim",
	config = function()
		require("mason-tool-installer").setup({
			ensure_installed = {
				"clangd",
				"clang-format",
				"lua-language-server",
				"stylua",
			},
			auto_update = false,
			run_on_start = true,
		})
	end,
}
