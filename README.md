# Douban.fm.arduino

Swtich Douban.fm channel via Arduino.

## Installation

Add this line to your application's Gemfile:

    gem 'douban.fm.arduino'

And then execute:

    $ bundle

Or install it yourself as:

    $ gem install douban.fm.arduino

## Usage

<pre>
$ douban.fm.arduino -h

Usage: douban.fm [OPTIONS]
    -d, --device device              the serial device where to read arduino serial output
    -r, --remote remote              remote host where douban.fm is running, in format of <IP>:<Port>
    -v, --version                    show current version
    -h, --help                       show this message
</pre>

Now because the limitation of my breadboard (because of size),
there are only three channels available to switch, which are
private, 咖啡, and 民谣.

Well, with only software you might not be able to do anything. But I'm really sorry that it is too late today.
I will try to draw the circuit later.

## Contributing

1. Fork it
2. Create your feature branch (`git checkout -b my-new-feature`)
3. Commit your changes (`git commit -am 'Add some feature'`)
4. Push to the branch (`git push origin my-new-feature`)
5. Create new Pull Request
