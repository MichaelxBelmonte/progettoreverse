// Function: FUN_004a3af0
// Address: 004a3af0
// Size: 811 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004a3af0(pthread_key_t param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  plVar1 = (longlong *)*unaff_RDI;
  if ((DAT_026fdd70 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026e3238 = FUN_00115af0();
    DAT_026e3220 = "MUAudioFileSource";
    _DAT_026e3228 = 0xa0;
    param_1 = 0x136df0;
    _DAT_026e3230 = FUN_00136df0;
    _DAT_026e3240 = 0;
    uRam00000000026e3248 = 0;
    _DAT_026e3250 = 0;
    uRam00000000026e3258 = 0;
    _DAT_026e3260 = 0;
    uRam00000000026e3268 = 0;
    _DAT_026e3270 = 0;
    uRam00000000026e3278 = 0;
    _DAT_026e3280 = 0;
    uRam00000000026e3288 = 0;
    _DAT_026e3290 = 0;
    uRam00000000026e3298 = 0;
    _DAT_026e32a0 = 0;
    uRam00000000026e32a8 = 0;
    _DAT_026e32b0 = 0;
    uRam00000000026e32b8 = 0;
    _DAT_026e32c0 = 0;
    uRam00000000026e32c8 = 0;
    _DAT_026e32d0 = 0;
    uRam00000000026e32d8 = 0;
    _DAT_026e32e0 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    FUN_00e85ea0();
  }
  plVar1 = (longlong *)*unaff_RSI;
  if ((DAT_026fdd70 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026e3238 = FUN_00115af0();
    DAT_026e3220 = "MUAudioFileSource";
    _DAT_026e3228 = 0xa0;
    param_1 = 0x136df0;
    _DAT_026e3230 = FUN_00136df0;
    _DAT_026e3240 = 0;
    uRam00000000026e3248 = 0;
    _DAT_026e3250 = 0;
    uRam00000000026e3258 = 0;
    _DAT_026e3260 = 0;
    uRam00000000026e3268 = 0;
    _DAT_026e3270 = 0;
    uRam00000000026e3278 = 0;
    _DAT_026e3280 = 0;
    uRam00000000026e3288 = 0;
    _DAT_026e3290 = 0;
    uRam00000000026e3298 = 0;
    _DAT_026e32a0 = 0;
    uRam00000000026e32a8 = 0;
    _DAT_026e32b0 = 0;
    uRam00000000026e32b8 = 0;
    _DAT_026e32c0 = 0;
    uRam00000000026e32c8 = 0;
    _DAT_026e32d0 = 0;
    uRam00000000026e32d8 = 0;
    _DAT_026e32e0 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    FUN_00e85ea0();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123abe0();
  (**(code **)(*local_60 + 0x390))();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123abe0();
  (**(code **)(*local_50 + 0x390))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  uVar2 = (**(code **)(*local_70 + 0x58))();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return uVar2;
}


