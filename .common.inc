socket="$CNODE_HOME/sockets/node0.socket" #Path to your cardano-node socket for machines in online-mode. Another example would be "$HOME/cnode/sockets/node.socket"
genesisfile="$CNODE_HOME/files/genesis.json"           #Shelley-Genesis path, you can also use the placeholder $HOME to specify your home directory
genesisfile_byron="$CNODE_HOME/files/byron-genesis.json"       #Byron-Genesis path, you can also use the placeholder $HOME to specify your home directory


#--------- Set the Path to your main binaries here ---------
cardanocli="$HOME/.cabal/bin/cardano-cli"      #Path to your cardano-cli binary you wanna use. If your binary is present in the Path just set it to "cardano-cli" without the "./"
cardanonode="$HOME/.cabal/bin/cardano-node"    #Path to your cardano-node binary you wanna use. If your binary is present in the Path just set it to "cardano-node" without the "./"
#bech32_bin="./bech32"           #Path to your bech32 binary you wanna use. If your binary is present in the Path just set it to "bech32" without the "./"




#--------- Only needed if you wanna change the BlockChain from the Mainnet to a Testnet Chain Setup
byronToShelleyEpochs=74        #choose 208 for the mainnet, 74 for the public testnet
magicparam="--testnet-magic 1097911063"          #choose "--mainnet" for mainnet or "--testnet-magic 1097911063" for the public testnet
addrformat="--testnet-magic 1097911063"          #choose "--mainnet" for mainnet address format or "--testnet-magic 1097911063" for the testnet address format
