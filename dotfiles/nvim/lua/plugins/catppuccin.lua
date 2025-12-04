return {
	"catppuccin/nvim",
	name = "catppuccin",
	lazy = false,
	priority = 1000,
	opts = {
		flavour = "mocha",
		transparent_background = false,
		integrations = {
			treesitter = true,
			native_lsp = {
				enabled = true,
				inlay_hints = { background = true },
			},
			nvimtree = true,
			cmp = true,
		},
	},
	config = function(_, opts)
		require("catppuccin").setup(opts)
		vim.cmd.colorscheme("catppuccin")
	end,
}
