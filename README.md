# latent_entropy

This gcc plugin generates some entropy from program state throughout the uptime of the kernel.
It has small performance loss. The plugin uses an attribute
which can be on a function (to extract entropy beyond init functions) or on a
variable (to initialize it with a random number generated at compile time)

This plugin was ported from [grsecurity](https://grsecurity.net/)/[PaX](https://pax.grsecurity.net/).
