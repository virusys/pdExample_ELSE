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
#pragma once

#include "ofMain.h"

#include "ofxPd.h"

extern "C" {
// else objects functions declaration
void above_tilde_setup(void);
void add_tilde_setup(void);
void adsr_tilde_setup(void);
void setup_allpass0x2e2nd_tilde(void);
void setup_allpass0x2erev_tilde(void);
void args_setup(void);
void asr_tilde_setup(void);
void autofade_tilde_setup(void);
void autofade2_tilde_setup(void);
void balance_tilde_setup(void);
void bandpass_tilde_setup(void);
void bandstop_tilde_setup(void);
void setup_bend0x2ein(void);
void setup_bend0x2eout(void);
void bicoeff_setup(void);
void biquads_tilde_setup(void);
void bitnormal_tilde_setup(void);
void setup_bl0x2eimp_tilde(void);
void setup_bl0x2eimp2_tilde(void);
void setup_bl0x2eosc_tilde(void);
void setup_bl0x2esaw_tilde(void);
void setup_bl0x2esaw2_tilde(void);
void setup_bl0x2esquare_tilde(void);
void setup_bl0x2etri_tilde(void);
void setup_bl0x2evsaw_tilde(void);
void blocksize_tilde_setup(void);
void break_setup(void);
void brown_tilde_setup(void);
void buffer_setup(void);
void button_setup(void);
void setup_canvas0x2eactive(void);
void setup_canvas0x2ebounds(void);
void setup_canvas0x2eedit(void);
void setup_canvas0x2efile(void);
void setup_canvas0x2egop(void);
void setup_canvas0x2emouse(void);
void setup_canvas0x2ename(void);
void setup_canvas0x2epos(void);
void setup_canvas0x2esetname(void);
void setup_canvas0x2evis(void);
void setup_canvas0x2ezoom(void);
void ceil_setup(void);
void ceil_tilde_setup(void);
void cents2ratio_setup(void);
void cents2ratio_tilde_setup(void);
void chance_setup(void);
void chance_tilde_setup(void);
void changed_setup(void);
void changed_tilde_setup(void);
void changed2_tilde_setup(void);
void click_setup(void);
void cmul_tilde_setup(void);
void colors_setup(void);
void setup_comb0x2efilt_tilde(void);
void setup_comb0x2erev_tilde(void);
void cosine_tilde_setup(void);
void crackle_tilde_setup(void);
void crossover_tilde_setup(void);
void setup_ctl0x2ein(void);
void setup_ctl0x2eout(void);
void cusp_tilde_setup(void);
void datetime_setup(void);
void db2lin_tilde_setup(void);
void decay_tilde_setup(void);
void decay2_tilde_setup(void);
void default_setup(void);
void del_tilde_setup(void);
void detect_tilde_setup(void);
void dir_setup(void);
void dollsym_setup(void);
void downsample_tilde_setup(void);
void drive_tilde_setup(void);
void dust_tilde_setup(void);
void dust2_tilde_setup(void);
void else_setup(void);
void envgen_tilde_setup(void);
void eq_tilde_setup(void);
void f2s_tilde_setup(void);
void factor_setup(void);
void fader_tilde_setup(void);
void fbdelay_tilde_setup(void);
void fbsine_tilde_setup(void);
void fbsine2_tilde_setup(void);
void setup_fdn0x2erev_tilde(void);
void ffdelay_tilde_setup(void);
void float2bits_setup(void);
void float2sig_tilde_setup(void);
void floor_setup(void);
void floor_tilde_setup(void);
void fold_setup(void);
void fold_tilde_setup(void);
void fontsize_setup(void);
void format_setup(void);
void setup_freq0x2eshift_tilde(void);
void function_setup(void);
void function_tilde_setup(void);
void gate2imp_tilde_setup(void);
void gaussian_tilde_setup(void);
void gbman_tilde_setup(void);
void gcd_setup(void);
void gendyn_tilde_setup(void);
void setup_giga0x2erev_tilde(void);
void glide_tilde_setup(void);
void glide2_tilde_setup(void);
void gray_tilde_setup(void);
void gui_setup(void);
void henon_tilde_setup(void);
void highpass_tilde_setup(void);
void highshelf_tilde_setup(void);
void hot_setup(void);
void hz2rad_setup(void);
void ikeda_tilde_setup(void);
void imp_tilde_setup(void);
void imp2_tilde_setup(void);
void impseq_tilde_setup(void);
void impulse_tilde_setup(void);
void impulse2_tilde_setup(void);
void initmess_setup(void);
void keyboard_setup(void);
void lag_tilde_setup(void);
void lag2_tilde_setup(void);
void lastvalue_tilde_setup(void);
void latoocarfian_tilde_setup(void);
void lb_setup(void);
void lfnoise_tilde_setup(void);
void limit_setup(void);
void lincong_tilde_setup(void);
void loadbanger_setup(void);
void logistic_tilde_setup(void);
void loop_setup(void);
void lop2_tilde_setup(void);
void lorenz_tilde_setup(void);
void lowpass_tilde_setup(void);
void lowshelf_tilde_setup(void);
void match_tilde_setup(void);
void median_tilde_setup(void);
void merge_setup(void);
void message_setup(void);
void messbox_setup(void);
void midi_setup(void);
void mouse_setup(void);
void numbox_tilde_setup(void);
void setup_mov0x2eavg_tilde(void);
void setup_mov0x2erms_tilde(void);
void mtx_tilde_setup(void);
void note_setup(void);
void setup_note0x2ein(void);
void setup_note0x2eout(void);
void nyquist_tilde_setup(void);
void onsetdetect_tilde_setup (void);
void op_tilde_setup(void);
void openfile_setup(void);
void oscope_tilde_setup(void);
void pack2_setup(void);
void pad_setup(void);
void pan2_tilde_setup(void);
void pan4_tilde_setup(void);
void panic_setup(void);
void parabolic_tilde_setup(void);
void peak_tilde_setup(void);
void setup_pgm0x2ein(void);
void setup_pgm0x2eout(void);
void pic_setup(void);
void pimp_tilde_setup(void);
void pimpmul_tilde_setup(void);
void pink_tilde_setup(void);
void pitch_tilde_setup (void);
void pluck_tilde_setup(void);
void pmosc_tilde_setup(void);
void power_tilde_setup(void);
void properties_setup(void);
void pulse_tilde_setup(void);
void pulsecount_tilde_setup(void);
void pulsediv_tilde_setup(void);
void quad_tilde_setup(void);
void quantizer_setup(void);
void quantizer_tilde_setup(void);
void rad2hz_setup(void);
void ramp_tilde_setup(void);
void rampnoise_tilde_setup(void);
void s2f_tilde_setup(void);
void setup_rand0x2ef(void);
void setup_rand0x2ef_tilde(void);
void setup_rand0x2ehist(void);
void setup_rand0x2ei(void);
void setup_rand0x2ei_tilde(void);
void setup_rand0x2eu(void);
void randpulse_tilde_setup(void);
void randpulse2_tilde_setup(void);
void range_tilde_setup(void);
void ratio2cents_setup(void);
void ratio2cents_tilde_setup(void);
void rec_setup(void);
void receiver_setup(void);
void rescale_setup(void);
void rescale_tilde_setup(void);
void resonant_tilde_setup(void);
void resonant2_tilde_setup(void);
void retrieve_setup(void);
void rint_setup(void);
void rint_tilde_setup(void);
void rms_tilde_setup(void);
void rotate_tilde_setup(void);
void route2_setup(void);
void routeall_setup(void);
void router_setup(void);
void routetype_setup(void);
void saw_tilde_setup(void);
void saw2_tilde_setup(void);
void schmitt_tilde_setup(void);
void selector_setup(void);
void separate_setup(void);
void sequencer_tilde_setup(void);
void sh_tilde_setup(void);
void shaper_tilde_setup(void);
void sig2float_tilde_setup(void);
void silencedetect_tilde_setup (void);
void sin_tilde_setup(void);
void sine_tilde_setup(void);
void slew_tilde_setup(void);
void slice_setup(void);
void sort_setup(void);
void spread_setup(void);
void spread_tilde_setup(void);
void square_tilde_setup(void);
void sr_tilde_setup(void);
void standard_tilde_setup(void);
void status_tilde_setup(void);
void stepnoise_tilde_setup(void);
void susloop_tilde_setup(void);
void suspedal_setup(void);
void svfilter_tilde_setup(void);
void symbol2any_setup(void);
void tabplayer_tilde_setup(void);
void tabreader_setup(void);
void tabreader_tilde_setup(void);
void tabwriter_tilde_setup(void);
void tempo_tilde_setup(void);
void tempodetect_tilde_setup (void);
void setup_timed0x2egate_tilde(void);
void toggleff_tilde_setup(void);
void setup_touch0x2ein(void);
void setup_touch0x2eout(void);
void tri_tilde_setup(void);
void setup_trig0x2edelay_tilde(void);
void setup_trig0x2edelay2_tilde(void);
void trighold_tilde_setup(void);
void trunc_setup(void);
void trunc_tilde_setup(void);
void tssdetect_tilde_setup (void);
void unmerge_setup(void);
void voices_setup(void);
void vsaw_tilde_setup(void);
void vu_tilde_setup(void );
void wavetable_tilde_setup(void);
void white_tilde_setup(void);
void wrap2_setup(void);
void wrap2_tilde_setup(void);
void wt_tilde_setup(void);
void xfade_tilde_setup(void);
void xgate_tilde_setup(void);
void xgate2_tilde_setup(void);
void xmod_tilde_setup(void);
void xmod2_tilde_setup(void);
void xselect_tilde_setup(void);
void xselect2_tilde_setup(void);
void zerocross_tilde_setup(void);
// end else objects functions declaration
}

// a namespace for the Pd types
using namespace pd;

// inherit pd receivers to receive message and midi events
class ofApp : public ofBaseApp, public PdReceiver, public PdMidiReceiver {
    
public:
    
    // main
    void setup();
    void update();
    void draw();
    void exit();
    
    // do something
    void playTone(int pitch);
    
    // input callbacks
    void keyPressed(int key);
    
    // audio callbacks
    void audioReceived(float * input, int bufferSize, int nChannels);
    void audioRequested(float * output, int bufferSize, int nChannels);
    
    // pd message receiver callbacks
    void print(const std::string &message);
    
    void receiveBang(const std::string &dest);
    void receiveFloat(const std::string &dest, float value);
    void receiveSymbol(const std::string &dest, const std::string &symbol);
    void receiveList(const std::string &dest, const pd::List &list);
    void receiveMessage(const std::string &dest, const std::string &msg, const pd::List &list);
    
    // pd midi receiver callbacks
    void receiveNoteOn(const int channel, const int pitch, const int velocity);
    void receiveControlChange(const int channel, const int controller, const int value);
    void receiveProgramChange(const int channel, const int value);
    void receivePitchBend(const int channel, const int value);
    void receiveAftertouch(const int channel, const int value);
    void receivePolyAftertouch(const int channel, const int pitch, const int value);
    
    void receiveMidiByte(const int port, const int byte);
    
    ofxPd pd;
    std::vector<float> scopeArray;
    std::vector<Patch> instances;
    
    int midiChan;
};

