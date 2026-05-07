// Function: FUN_00b9abe0
// Address: 00b9abe0
// Size: 1237 bytes
// Class: MDMetaWindowController


void FUN_00b9abe0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  fVar8 = (float)((ulonglong)param_2 >> 0x20);
  fVar7 = (float)param_2;
  FUN_01d3abf0();
  uVar5 = FUN_01e466c0();
  fVar6 = (float)FUN_01e3f820();
  iVar4 = FUN_01d3a5a0();
  if ((iVar4 == 1) && (iVar4 = FUN_01d3b630(), iVar4 == 1)) {
    auVar11._4_4_ = fVar8;
    auVar11._0_4_ = fVar7;
    auVar11._8_4_ = in_XMM1_Dc;
    auVar11._12_4_ = in_XMM1_Dd;
    auVar9._4_4_ = fVar8;
    auVar9._0_4_ = fVar8;
    auVar9._8_4_ = in_XMM1_Dd;
    auVar9._12_4_ = in_XMM1_Dd;
    auVar10._4_12_ = auVar9._4_12_;
    auVar10._0_4_ = fVar8 * DAT_02394244;
    auVar11 = blendps(auVar10,auVar11,0xe);
    cVar3 = FUN_00d05410(uVar5,fVar6 + (fVar7 - auVar10._0_4_),auVar11._0_8_);
    if ((cVar3 != '\0') && (cVar3 = (**(code **)(*unaff_RDI + 0xae8))(), cVar3 != '\0')) {
      (**(code **)(*unaff_RDI + 0x620))();
      FUN_00d403d0();
      local_e0 = DAT_02764998;
      if (DAT_02764998 != 0) {
        FUN_00d50b00();
      }
      local_d8 = '\x01';
      FUN_00d50b00();
      lVar2 = DAT_027fffa8;
      if (DAT_027fffa8 != 0) {
        FUN_00d50b00();
      }
      local_f8 = lVar2;
      FUN_00083ea0(2,&local_f8);
      FUN_000b4da0();
      local_40 = local_a0;
      local_38 = 0;
      if (local_98 == '\0') {
        if (local_a0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_38 = '\x01';
      FUN_00d40470(&local_40,&stack0xffffffffffffff70,1,3);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      do {
        (**(code **)(*unaff_RDI + 0x658))();
        puVar1 = (undefined8 *)*unaff_RSI;
        if (puVar1 == &DAT_024c5048) {
          if ((char)unaff_RSI[1] == '\0') {
            if (local_68 == '\0') {
              FUN_00d50b00();
              goto LAB_00b9aefd;
            }
LAB_00b9afb6:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            local_68 = '\0';
          }
          lVar2 = *unaff_RSI;
        }
        else {
          lVar2 = unaff_RSI[1];
          if (local_68 != '\0') {
            *unaff_RSI = (longlong)&DAT_024c5048;
            if (((char)lVar2 != '\0') && (puVar1 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00b9afb6;
          }
          FUN_00d50b00();
          *unaff_RSI = (longlong)&DAT_024c5048;
          if (((char)lVar2 != '\0') && (puVar1 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
LAB_00b9aefd:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          lVar2 = *unaff_RSI;
        }
        if (lVar2 == 0) {
          if (local_68 != '\0') {
            FUN_00d50b20();
          }
LAB_00b9afe0:
          FUN_00d403d0();
          local_d0 = DAT_027649a0;
          if (DAT_027649a0 != 0) {
            FUN_00d50b00();
          }
          local_c8 = '\x01';
          FUN_00d50b00();
          local_c0 = 0;
          local_b8 = '\0';
          FUN_00d40470(&local_c0,&stack0xffffffffffffff80,1,3);
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          if (unaff_RDI != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_c8 != '\0') && (local_d0 != 0)) {
            FUN_00d50b20();
          }
          if (local_68 != '\0') {
            FUN_00d50b20();
          }
          (**(code **)(*unaff_RDI + 0x620))();
          return;
        }
        iVar4 = FUN_01d3a5a0();
        if (local_68 != '\0') {
          FUN_00d50b20();
        }
        if (iVar4 == 6) goto LAB_00b9afe0;
        FUN_01d3abf0();
        FUN_01e466c0();
        (**(code **)(*unaff_RDI + 0x620))();
      } while( true );
    }
  }
  local_b0 = *unaff_RSI;
  local_a8 = '\0';
  FUN_01d82ea0();
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  return;
}


