// Function: FUN_01388130
// Address: 01388130
// Size: 1109 bytes
// Class: MUAudioSourcePrincipalItem


void FUN_01388130(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *pvVar7;
  pthread_key_t pVar8;
  int iVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined1 local_b8 [4];
  int iStack_b4;
  undefined8 *local_b0;
  char local_a8;
  longlong local_a0;
  undefined1 local_98;
  longlong local_90;
  undefined8 local_88;
  int local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  longlong local_48;
  char local_40;
  char local_31;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  local_58 = puVar4;
  FUN_00c92160();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar8 = 0x2572358;
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  local_50 = puVar4;
  if (*unaff_RSI != 0) {
    local_98 = 0;
    local_a0 = 0;
    local_88 = 0xffffffff;
    local_80 = 0;
    local_88._4_4_ = 0;
    local_90 = *unaff_RSI;
    while( true ) {
      if (local_88._4_4_ != 0) {
        if (local_88._4_4_ < 1) {
          iVar9 = -local_88._4_4_;
        }
        else {
          iVar9 = (int)local_88 - local_88._4_4_;
          local_88 = CONCAT44(local_88._4_4_,iVar9);
          FUN_00d23690();
          local_80 = local_80 + local_88._4_4_;
          iVar9 = 0;
        }
        local_88 = CONCAT44(iVar9,(int)local_88);
      }
      lVar5 = (longlong)(int)local_88;
      iVar9 = (int)local_88 + 1;
      local_88 = CONCAT44(local_88._4_4_,iVar9);
      if (*(int *)(local_90 + 0xc) <= iVar9) break;
      local_a0 = *(longlong *)(*(longlong *)(local_90 + 0x10) + 8 + lVar5 * 8);
      local_70 = 0;
      lVar5 = *(longlong *)(local_a0 + 0x10);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      local_70 = '\x01';
      local_60 = 0;
      lVar1 = *(longlong *)(local_a0 + 0x18);
      local_78 = lVar5;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_60 = '\x01';
      local_68 = lVar1;
      uVar6 = FUN_0133bd20(*(undefined8 *)(local_a0 + 0x20),&local_68,local_b8,&local_31,1);
      *(undefined8 *)(local_a0 + 0x20) = uVar6;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (((*(longlong *)(local_a0 + 0x20) != 0) && (0 < iStack_b4)) && (local_31 != '\0')) {
        local_b0 = local_58;
        local_a8 = '\0';
        FUN_015b4ee0();
        if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        lVar5 = *(longlong *)(local_a0 + 0x10);
        if (lVar5 != 0) {
          FUN_00d50b00();
          local_40 = '\0';
          local_48 = lVar5;
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        lVar5 = *(longlong *)(local_a0 + 0x18);
        if (lVar5 != 0) {
          FUN_00d50b00();
          local_40 = '\0';
          local_48 = lVar5;
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
    }
    lVar5 = local_90;
    FUN_01954b60();
    pVar8 = (pthread_key_t)lVar5;
  }
  puVar2 = local_50;
  puVar4 = local_58;
  if (((*(longlong *)(unaff_RDI + 0x1f8) == 0) && (*(longlong *)(unaff_RDI + 0x200) == 0)) &&
     (*(longlong *)(unaff_RDI + 0x148) != 0)) {
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar9 = FUN_0141bab0();
    if (iVar9 != 3) goto LAB_0138846b;
  }
  else {
LAB_0138846b:
    cVar3 = FUN_01334f30();
    if (cVar3 == '\0') goto LAB_01388504;
  }
  if (0xe < *(int *)(puVar4 + 3) + 7U) {
    FUN_013469e0();
    FUN_01388750();
    FUN_01353f80();
  }
LAB_01388504:
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


