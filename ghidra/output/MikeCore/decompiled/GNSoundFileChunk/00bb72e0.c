// Function: FUN_00bb72e0
// Address: 00bb72e0
// Size: 1601 bytes
// Class: GNSoundFileChunk
// String references:
//   "GNSoundFileChunk"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00bb72e0(undefined4 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong **pplVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  int local_7c;
  longlong local_78;
  char local_70;
  int local_54;
  longlong local_50;
  char local_48;
  longlong local_40;
  int local_38;
  
  if (*unaff_RSI == 0) {
    iVar4 = 0;
  }
  else {
    local_48 = '\0';
    local_50 = 0;
    local_40 = *(longlong *)(*unaff_RSI + 0x10);
    local_38 = 0;
    if (*(int *)(local_40 + 0xc) < 1) {
      local_54 = 0;
    }
    else {
      local_54 = 0;
      do {
        local_50 = *(longlong *)(*(longlong *)(local_40 + 0x10) + (longlong)local_38 * 8);
        param_1 = FUN_00e6fcd0((longlong)local_38,&local_50);
        plVar1 = local_e0;
        if ((DAT_0272bc70 == '\0') &&
           (iVar4 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_00, iVar4 != 0)) {
          _DAT_02765778 = FUN_00d4fe50();
          _DAT_02765760 = "GNSoundFileChunk";
          _DAT_02765768 = 0x10;
          _DAT_02765770 = FUN_007b4610;
          _DAT_02765780 = 0;
          uRam0000000002765788 = 0;
          _DAT_02765790 = 0;
          uRam0000000002765798 = 0;
          _DAT_027657a0 = 0;
          uRam00000000027657a8 = 0;
          _DAT_027657b0 = 0;
          uRam00000000027657b8 = 0;
          _DAT_027657c0 = 0;
          uRam00000000027657c8 = 0;
          _DAT_027657d0 = 0;
          uRam00000000027657d8 = 0;
          _DAT_027657e0 = 0;
          uRam00000000027657e8 = 0;
          _DAT_027657f0 = 0;
          uRam00000000027657f8 = 0;
          _DAT_02765800 = 0;
          uRam0000000002765808 = 0;
          _DAT_02765810 = 0;
          uRam0000000002765818 = 0;
          _DAT_02765820 = 0;
          param_1 = ___cxa_guard_release();
        }
        pplVar8 = (longlong **)&DAT_02802688;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar8 = &local_e0;
          param_1 = extraout_XMM0_Da;
          if (cVar3 == '\0') {
            pplVar8 = (longlong **)&DAT_02802688;
          }
        }
        plVar1 = *pplVar8;
        if (*(char *)(pplVar8 + 1) == '\0') {
          if (plVar1 != (longlong *)0x0) {
            param_1 = FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar8 + 1) = 0;
        }
        if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
          param_1 = FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          local_70 = 0;
          lVar2 = *(longlong *)(unaff_RDI + 0x18);
          if (lVar2 != 0) {
            param_1 = FUN_00d50b00();
          }
          local_70 = '\x01';
          local_78 = lVar2;
          iVar4 = FUN_00bc0a20(param_1,2);
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          param_1 = FUN_00d50b20();
          local_54 = local_54 + iVar4;
        }
        local_38 = local_38 + 1;
      } while (local_38 < *(int *)(local_40 + 0xc));
      if ((local_48 != '\0') && (local_50 != 0)) {
        param_1 = FUN_00d50b20();
      }
    }
    lVar2 = DAT_02764940;
    if (DAT_02764940 != 0) {
      param_1 = FUN_00d50b00();
    }
    local_d0 = lVar2;
    local_c8 = '\x01';
    FUN_000175c0(param_1,&local_d0);
    lVar2 = local_50;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    iVar5 = FUN_00bb4330();
    uVar9 = extraout_XMM0_Da_01;
    if (lVar2 != 0) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    lVar2 = DAT_02765308;
    if (DAT_02765308 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_c0 = lVar2;
    local_b8 = '\x01';
    FUN_000175c0(uVar9,&local_c0);
    lVar2 = local_50;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    iVar6 = FUN_00bb06e0();
    uVar9 = extraout_XMM0_Da_02;
    if (lVar2 != 0) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    lVar2 = DAT_02765348;
    if (DAT_02765348 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_b0 = lVar2;
    local_a8 = '\x01';
    FUN_000175c0(uVar9,&local_b0);
    lVar2 = local_50;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    iVar7 = FUN_00bb43f0();
    uVar9 = extraout_XMM0_Da_03;
    if (lVar2 != 0) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    lVar2 = DAT_02765268;
    if (DAT_02765268 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_a0 = lVar2;
    local_98 = '\x01';
    FUN_000175c0(uVar9,&local_a0);
    lVar2 = local_50;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_7c = FUN_00bb6a00();
    uVar9 = extraout_XMM0_Da_04;
    if (lVar2 != 0) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    lVar2 = DAT_02765270;
    if (DAT_02765270 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_90 = lVar2;
    local_88 = '\x01';
    FUN_000175c0(uVar9,&local_90);
    lVar2 = local_50;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    iVar4 = FUN_00bb5b50();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    iVar4 = iVar5 + local_54 + iVar6 + iVar7 + local_7c + iVar4;
  }
  return iVar4;
}


