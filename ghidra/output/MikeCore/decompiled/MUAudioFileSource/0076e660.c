// Function: FUN_0076e660
// Address: 0076e660
// Size: 1530 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076e660(pthread_key_t param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *******ppppppplVar7;
  undefined8 *unaff_RDI;
  int iVar8;
  longlong ******pppppplVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *******local_a0;
  char local_98;
  longlong *******local_90;
  int local_88;
  int iStack_84;
  int local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *******local_48;
  longlong local_40;
  char local_38;
  
  if (*param_2 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  FUN_00757c60();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar10 = FUN_012cb480();
  ppppppplVar7 = local_a0;
  if (local_98 == '\0') {
    if (((local_a0 != (longlong *******)0x0) && (uVar10 = FUN_00d50b00(), local_98 != '\0')) &&
       (local_a0 != (longlong *******)0x0)) {
      uVar10 = FUN_00d50b20();
    }
  }
  else {
    local_98 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  if (ppppppplVar7 != (longlong *******)0x0) {
    local_98 = 0;
    local_a0 = (longlong *******)0x0;
    local_48 = ppppppplVar7;
    local_90 = ppppppplVar7;
    local_88 = -1;
    iStack_84 = 0;
    local_80 = 0;
LAB_0076e753:
    while( true ) {
      iVar1 = iStack_84;
      if (iStack_84 != 0) {
        if (iStack_84 < 1) {
          iStack_84 = -iStack_84;
        }
        else {
          local_88 = local_88 - iStack_84;
          uVar10 = FUN_00d23690(uVar10,iStack_84);
          local_80 = local_80 + iVar1;
          iStack_84 = 0;
        }
      }
      lVar5 = (longlong)local_88;
      iVar8 = local_88 + 1;
      local_88 = iVar8;
      iVar1 = *(int *)((longlong)local_90 + 0xc);
      if (iVar1 <= iVar8) break;
      pppppplVar9 = (longlong ******)local_90[2][lVar5 + 1];
      local_a0 = (longlong *******)pppppplVar9;
      if ((DAT_026fdd70 == '\0') &&
         (iVar3 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_00, iVar3 != 0)) {
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
        uVar10 = ___cxa_guard_release();
      }
      ppppppplVar7 = (longlong *******)&DAT_02802688;
      if (pppppplVar9 != (longlong ******)0x0) {
        (*(code *)(*pppppplVar9)[0x6c])();
        cVar2 = FUN_00e85ea0();
        ppppppplVar7 = (longlong *******)&local_a0;
        uVar10 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          ppppppplVar7 = (longlong *******)&DAT_02802688;
        }
      }
      pppppplVar9 = *ppppppplVar7;
      if (*(char *)(ppppppplVar7 + 1) == '\0') goto LAB_0076e810;
      *(undefined1 *)(ppppppplVar7 + 1) = 0;
      if (pppppplVar9 != (longlong ******)0x0) goto LAB_0076e825;
    }
    pppppplVar9 = (longlong ******)0x0;
    ppppppplVar7 = local_90;
    goto LAB_0076ebf0;
  }
LAB_0076ec41:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
LAB_0076e810:
  if (pppppplVar9 == (longlong ******)0x0) goto LAB_0076e753;
  FUN_00d50b00();
LAB_0076e825:
  pvVar4 = _pthread_getspecific((pthread_key_t)ppppppplVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123b100();
  if (local_40 == 0) {
    cVar2 = '\0';
  }
  else {
    pvVar4 = _pthread_getspecific((pthread_key_t)ppppppplVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123b100();
    FUN_00b88600();
    local_70 = 0;
    if (local_c8 == '\0') {
      if (local_d0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_c8 = '\0';
    }
    local_70 = '\x01';
    local_78 = local_d0;
    FUN_00b84ae0();
    FUN_00b88600();
    local_50 = 0;
    if (local_a8 == '\0') {
      if (local_b0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a8 = '\0';
    }
    local_50 = '\x01';
    local_58 = local_b0;
    FUN_00b84ae0();
    local_60 = 0;
    if (local_b8 == '\0') {
      if (local_c0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_b8 = '\0';
    }
    local_60 = '\x01';
    local_68 = local_c0;
    cVar2 = (**(code **)(*local_f8 + 0x50))();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    uVar10 = FUN_00d50b20();
    goto LAB_0076e753;
  }
  FUN_00d50b00();
  FUN_00d50b20();
LAB_0076ebf0:
  pVar6 = (pthread_key_t)ppppppplVar7;
  FUN_00115e00();
  FUN_00d50b20();
  if (pppppplVar9 != (longlong ******)0x0) {
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df10();
    if (iVar1 <= iVar8) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  goto LAB_0076ec41;
}


