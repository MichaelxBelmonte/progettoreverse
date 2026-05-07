// Function: FUN_004a7d00
// Address: 004a7d00
// Size: 920 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"


/* WARNING: Removing unreachable block (ram,0x004a8096) */
/* WARNING: Removing unreachable block (ram,0x004a80a3) */
/* WARNING: Removing unreachable block (ram,0x004a7e87) */
/* WARNING: Removing unreachable block (ram,0x004a7eb0) */
/* WARNING: Removing unreachable block (ram,0x004a7e89) */
/* WARNING: Removing unreachable block (ram,0x004a7eb2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a7d00(pthread_key_t param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong unaff_RDI;
  longlong local_78;
  char local_70;
  int local_60;
  longlong *local_50;
  char local_48 [8];
  longlong local_40;
  char local_38;
  
  lVar5 = *(longlong *)(unaff_RDI + 0x38);
  if (lVar5 == 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01713990();
  }
  else {
    FUN_00d50b00();
    local_38 = '\x01';
    local_40 = lVar5;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb480();
  if ((local_70 == '\0') && (local_78 != 0)) {
    FUN_00d50b00();
  }
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_78 != 0) {
    local_60 = -1;
    while( true ) {
      lVar5 = (longlong)local_60;
      local_60 = local_60 + 1;
      if (*(int *)(local_78 + 0xc) <= local_60) break;
      plVar1 = *(longlong **)(*(longlong *)(local_78 + 0x10) + 8 + lVar5 * 8);
      local_50 = plVar1;
      if ((DAT_026fdd70 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        _DAT_026e3238 = FUN_00115af0();
        DAT_026e3220 = "MUAudioFileSource";
        _DAT_026e3228 = 0xa0;
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
      pplVar7 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar7 = &local_50;
        if (cVar2 == '\0') {
          pplVar7 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar7 != (longlong *)0x0) {
        pvVar4 = _pthread_getspecific((pthread_key_t)pplVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0123b100();
        plVar1 = local_50;
        local_40 = CONCAT71(local_40._1_7_,local_48[0]);
        plVar6 = (longlong *)local_48;
        if (local_48[0] == '\0') {
          plVar6 = &local_40;
        }
        *(undefined1 *)plVar6 = 0;
        if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00b875e0();
          if ((char)local_40 != '\0') {
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_00136d50();
    FUN_00d50b20();
  }
  return;
}


