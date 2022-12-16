/*
 * Copyright (c) 2011 Dan Wilcox <danomatika@gmail.com>
 *
 * BSD Simplified License.
 * For information on usage and redistribution, and for a DISCLAIMER OF ALL
 * WARRANTIES, see the file, "LICENSE.txt," in this distribution.
 *
 * See https://github.com/danomatika/ofxPd for documentation
 *
 */
#include "ofApp.h"

void libpd_init_else(void)
{
    // else objects initialization
    above_tilde_setup();
    add_tilde_setup();
    adsr_tilde_setup();
    setup_allpass0x2e2nd_tilde();
    setup_allpass0x2erev_tilde();
    args_setup();
    asr_tilde_setup();
    autofade_tilde_setup();
    autofade2_tilde_setup();
    balance_tilde_setup();
    bandpass_tilde_setup();
    bandstop_tilde_setup();
    setup_bend0x2ein();
    setup_bend0x2eout();
    bicoeff_setup();
    biquads_tilde_setup();
    bitnormal_tilde_setup();
    setup_bl0x2eimp_tilde();
    setup_bl0x2eimp2_tilde();
    setup_bl0x2eosc_tilde();
    setup_bl0x2esaw_tilde();
    setup_bl0x2esaw2_tilde();
    setup_bl0x2esquare_tilde();
    setup_bl0x2etri_tilde();
    setup_bl0x2evsaw_tilde();
    blocksize_tilde_setup();
    break_setup();
    brown_tilde_setup();
    buffer_setup();
    button_setup();
    setup_canvas0x2eactive();
    setup_canvas0x2ebounds();
    setup_canvas0x2eedit();
    setup_canvas0x2efile();
    setup_canvas0x2egop();
    setup_canvas0x2emouse();
    setup_canvas0x2ename();
    setup_canvas0x2epos();
    setup_canvas0x2esetname();
    setup_canvas0x2evis();
    setup_canvas0x2ezoom();
    ceil_setup();
    ceil_tilde_setup();
    cents2ratio_setup();
    cents2ratio_tilde_setup();
    chance_setup();
    chance_tilde_setup();
    changed_setup();
    changed_tilde_setup();
    changed2_tilde_setup();
    click_setup();
    cmul_tilde_setup();
    colors_setup();
    setup_comb0x2efilt_tilde();
    setup_comb0x2erev_tilde();
    cosine_tilde_setup();
    crackle_tilde_setup();
    crossover_tilde_setup();
    setup_ctl0x2ein();
    setup_ctl0x2eout();
    cusp_tilde_setup();
    datetime_setup();
    db2lin_tilde_setup();
    decay_tilde_setup();
    decay2_tilde_setup();
    default_setup();
    del_tilde_setup();
    detect_tilde_setup();
    dir_setup();
    dollsym_setup();
    downsample_tilde_setup();
    drive_tilde_setup();
    dust_tilde_setup();
    dust2_tilde_setup();
    else_setup();
    envgen_tilde_setup();
    eq_tilde_setup();
    f2s_tilde_setup();
    factor_setup();
    fader_tilde_setup();
    fbdelay_tilde_setup();
    fbsine_tilde_setup();
    fbsine2_tilde_setup();
    setup_fdn0x2erev_tilde();
    ffdelay_tilde_setup();
    float2bits_setup();
    float2sig_tilde_setup();
    floor_setup();
    floor_tilde_setup();
    fold_setup();
    fold_tilde_setup();
    fontsize_setup();
    format_setup();
    setup_freq0x2eshift_tilde();
    function_setup();
    function_tilde_setup();
    gate2imp_tilde_setup();
    gaussian_tilde_setup();
    gbman_tilde_setup();
    gcd_setup();
    gendyn_tilde_setup();
    setup_giga0x2erev_tilde();
    glide_tilde_setup();
    glide2_tilde_setup();
    gray_tilde_setup();
    gui_setup();
    henon_tilde_setup();
    highpass_tilde_setup();
    highshelf_tilde_setup();
    hot_setup();
    hz2rad_setup();
    ikeda_tilde_setup();
    imp_tilde_setup();
    imp2_tilde_setup();
    impseq_tilde_setup();
    impulse_tilde_setup();
    impulse2_tilde_setup();
    initmess_setup();
    keyboard_setup();
    lag_tilde_setup();
    lag2_tilde_setup();
    lastvalue_tilde_setup();
    latoocarfian_tilde_setup();
    lb_setup();
    lfnoise_tilde_setup();
    limit_setup();
    lincong_tilde_setup();
    loadbanger_setup();
    logistic_tilde_setup();
    loop_setup();
    lop2_tilde_setup();
    lorenz_tilde_setup();
    lowpass_tilde_setup();
    lowshelf_tilde_setup();
    match_tilde_setup();
    median_tilde_setup();
    merge_setup();
    message_setup();
    messbox_setup();
    midi_setup();
    mouse_setup();
    numbox_tilde_setup();
    setup_mov0x2eavg_tilde();
    setup_mov0x2erms_tilde();
    mtx_tilde_setup();
    note_setup();
    setup_note0x2ein();
    setup_note0x2eout();
    nyquist_tilde_setup();
    onsetdetect_tilde_setup ();
    op_tilde_setup();
    openfile_setup();
    oscope_tilde_setup();
    pack2_setup();
    pad_setup();
    pan2_tilde_setup();
    pan4_tilde_setup();
    panic_setup();
    parabolic_tilde_setup();
    peak_tilde_setup();
    setup_pgm0x2ein();
    setup_pgm0x2eout();
    pic_setup();
    pimp_tilde_setup();
    pimpmul_tilde_setup();
    pink_tilde_setup();
    pitch_tilde_setup ();
    pluck_tilde_setup();
    pmosc_tilde_setup();
    power_tilde_setup();
    properties_setup();
    pulse_tilde_setup();
    pulsecount_tilde_setup();
    pulsediv_tilde_setup();
    quad_tilde_setup();
    quantizer_setup();
    quantizer_tilde_setup();
    rad2hz_setup();
    ramp_tilde_setup();
    rampnoise_tilde_setup();
    setup_rand0x2ef();
    setup_rand0x2ef_tilde();
    setup_rand0x2ehist();
    setup_rand0x2ei();
    setup_rand0x2ei_tilde();
    setup_rand0x2eu();
    randpulse_tilde_setup();
    randpulse2_tilde_setup();
    range_tilde_setup();
    ratio2cents_setup();
    ratio2cents_tilde_setup();
    rec_setup();
    receiver_setup();
    rescale_setup();
    rescale_tilde_setup();
    resonant_tilde_setup();
    resonant2_tilde_setup();
    retrieve_setup();
    rint_setup();
    rint_tilde_setup();
    rms_tilde_setup();
    rotate_tilde_setup();
    route2_setup();
    routeall_setup();
    router_setup();
    routetype_setup();
    s2f_tilde_setup();
    saw_tilde_setup();
    saw2_tilde_setup();
    schmitt_tilde_setup();
    selector_setup();
    separate_setup();
    sequencer_tilde_setup();
    sh_tilde_setup();
    shaper_tilde_setup();
    sig2float_tilde_setup();
    silencedetect_tilde_setup ();
    sin_tilde_setup();
    sine_tilde_setup();
    slew_tilde_setup();
    slice_setup();
    sort_setup();
    spread_setup();
    spread_tilde_setup();
    square_tilde_setup();
    sr_tilde_setup();
    standard_tilde_setup();
    status_tilde_setup();
    stepnoise_tilde_setup();
    susloop_tilde_setup();
    suspedal_setup();
    svfilter_tilde_setup();
    symbol2any_setup();
    tabplayer_tilde_setup();
    tabreader_setup();
    tabreader_tilde_setup();
    tabwriter_tilde_setup();
    tempo_tilde_setup();
    tempodetect_tilde_setup ();
    setup_timed0x2egate_tilde();
    toggleff_tilde_setup();
    setup_touch0x2ein();
    setup_touch0x2eout();
    tri_tilde_setup();
    setup_trig0x2edelay_tilde();
    setup_trig0x2edelay2_tilde();
    trighold_tilde_setup();
    trunc_setup();
    trunc_tilde_setup();
    tssdetect_tilde_setup ();
    unmerge_setup();
    voices_setup();
    vsaw_tilde_setup();
    vu_tilde_setup( );
    wavetable_tilde_setup();
    white_tilde_setup();
    wrap2_setup();
    wrap2_tilde_setup();
    wt_tilde_setup();
    xfade_tilde_setup();
    xgate_tilde_setup();
    xgate2_tilde_setup();
    xmod_tilde_setup();
    xmod2_tilde_setup();
    xselect_tilde_setup();
    xselect2_tilde_setup();
    zerocross_tilde_setup();
}

//--------------------------------------------------------------
void ofApp::setup() {

    libpd_init_else();
    
	ofSetFrameRate(60);
	ofSetVerticalSync(true);
//	ofSetLogLevel("Pd", OF_LOG_VERBOSE); // see verbose info inside

	// double check where we are ...
	std::cout << ofFilePath::getCurrentWorkingDirectory() << std::endl;

	// the number of libpd ticks per buffer,
	// used to compute the audio buffer len: tpb * blocksize (always 64)
	#ifdef TARGET_LINUX_ARM
		// longer latency for Raspberry PI
		int ticksPerBuffer = 32; // 32 * 64 = buffer len of 2048
		int numInputs = 0; // no built in mic
	#else
		int ticksPerBuffer = 8; // 8 * 64 = buffer len of 512
		int numInputs = 1;
	#endif

	// setup OF sound stream
	ofSoundStreamSettings settings;
	settings.numInputChannels = 1;
	settings.numOutputChannels = 2;
	settings.sampleRate = 44100;
	settings.bufferSize = ofxPd::blockSize() * ticksPerBuffer;
	settings.setInListener(this);
	settings.setOutListener(this);
	ofSoundStreamSetup(settings);

	// setup Pd
	//
	// set 4th arg to true for queued message passing using an internal ringbuffer,
	// this is useful if you need to control where and when the message callbacks
	// happen (ie. within a GUI thread)
	//
	// note: you won't see any message prints until update() is called since
	// the queued messages are processed there, this is normal
	//
	if(!pd.init(2, numInputs, 44100, ticksPerBuffer, true)) {
		OF_EXIT_APP(1);
	}
        
	// subscribe to receive source names
	pd.subscribe("toOF");

	// add message receiver, required if you want to recieve messages
	pd.addReceiver(*this); // automatically receives from all subscribed sources
	// add midi receiver, required if you want to recieve midi messages
	pd.addMidiReceiver(*this); // automatically receives from all channels

	// add the data/pd folder to the search path
    pd.addToSearchPath("pd");
    pd.addToSearchPath("else");
	// audio processing on
	pd.start();

	// -----------------------------------------------------
	std::cout << std::endl << "BEGIN Patch Test" << std::endl;

	// open patch
    Patch patch = pd.openPatch("pd/test.pd");
    std::cout << patch << std::endl;
}

//--------------------------------------------------------------
void ofApp::update() {
	ofBackground(100, 100, 100);
	
	// since this is a test and we don't know if init() was called with
	// queued = true or not, we check it here
	if(pd.isQueued()) {
		// process any received messages, if you're using the queue and *do not*
		// call these, you won't receieve any messages or midi!
		pd.receiveMessages();
		pd.receiveMidi();
	}
}

//--------------------------------------------------------------
void ofApp::draw() {

}

//--------------------------------------------------------------
void ofApp::exit() {

	// cleanup
	ofSoundStreamStop();
}

//--------------------------------------------------------------
void ofApp::playTone(int pitch) {
    pd.sendFloat("mnotein", pitch);
}

//--------------------------------------------------------------
void ofApp::keyPressed (int key) {

	switch(key) {
		default:
			break;
	}
}

//--------------------------------------------------------------
void ofApp::audioReceived(float * input, int bufferSize, int nChannels) {
	pd.audioIn(input, bufferSize, nChannels);
}

//--------------------------------------------------------------
void ofApp::audioRequested(float * output, int bufferSize, int nChannels) {
	pd.audioOut(output, bufferSize, nChannels);
}

//--------------------------------------------------------------
void ofApp::print(const std::string &message) {
	std::cout << message << std::endl;
}

//--------------------------------------------------------------
void ofApp::receiveBang(const std::string &dest) {
	std::cout << "OF: bang " << dest << std::endl;
}

void ofApp::receiveFloat(const std::string &dest, float value) {
	std::cout << "OF: float " << dest << ": " << value << std::endl;
}

void ofApp::receiveSymbol(const std::string &dest, const std::string &symbol) {
	std::cout << "OF: symbol " << dest << ": " << symbol << std::endl;
}

void ofApp::receiveList(const std::string &dest, const pd::List &list) {
	std::cout << "OF: list " << dest << ": ";

	// step through the list
	for(int i = 0; i < list.len(); ++i) {
		if(list.isFloat(i))
			std::cout << list.getFloat(i) << " ";
		else if(list.isSymbol(i))
			std::cout << list.getSymbol(i) << " ";
	}

	// you can also use the built in toString function or simply stream it out
	// std::cout << list.toString();
	// std::cout << list;

	// print an OSC-style type string
	std::cout << list.types() << std::endl;
}

void ofApp::receiveMessage(const std::string&dest, const std::string &msg, const pd::List &list) {
	std::cout << "OF: message " << dest << ": " << msg << " " << list.toString() << list.types() << std::endl;
}

//--------------------------------------------------------------
void ofApp::receiveNoteOn(const int channel, const int pitch, const int velocity) {
	std::cout << "OF MIDI: note on: " << channel << " " << pitch << " " << velocity << std::endl;
}

void ofApp::receiveControlChange(const int channel, const int controller, const int value) {
	std::cout << "OF MIDI: control change: " << channel << " " << controller << " " << value << std::endl;
}

// note: pgm nums are 1-128 to match pd
void ofApp::receiveProgramChange(const int channel, const int value) {
	std::cout << "OF MIDI: program change: " << channel << " " << value << std::endl;
}

void ofApp::receivePitchBend(const int channel, const int value) {
	std::cout << "OF MIDI: pitch bend: " << channel << " " << value << std::endl;
}

void ofApp::receiveAftertouch(const int channel, const int value) {
	std::cout << "OF MIDI: aftertouch: " << channel << " " << value << std::endl;
}

void ofApp::receivePolyAftertouch(const int channel, const int pitch, const int value) {
	std::cout << "OF MIDI: poly aftertouch: " << channel << " " << pitch << " " << value << std::endl;
}

// note: pd adds +2 to the port num, so sending to port 3 in pd to [midiout],
//       shows up at port 1 in ofxPd
void ofApp::receiveMidiByte(const int port, const int byte) {
	std::cout << "OF MIDI: midi byte: " << port << " " << byte << std::endl;
}
