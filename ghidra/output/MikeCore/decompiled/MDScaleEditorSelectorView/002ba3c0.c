// Function: FUN_002ba3c0
// Address: 002ba3c0
// Size: 2654 bytes
// Class: MDScaleEditorSelectorView


/* WARNING: Removing unreachable block (ram,0x002bad80) */
/* WARNING: Removing unreachable block (ram,0x002bad8d) */
/* WARNING: Removing unreachable block (ram,0x002bac93) */
/* WARNING: Removing unreachable block (ram,0x002bac9c) */

void FUN_002ba3c0(void)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 uVar8;
  longlong *plVar9;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong lVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  longlong local_1c0;
  longlong local_1b8;
  code *local_1b0;
  undefined1 local_1a8 [16];
  undefined8 local_198;
  longlong local_188;
  char local_180;
  undefined8 *local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  int local_124;
  float local_120;
  float local_11c;
  longlong *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  undefined1 local_f8 [16];
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  local_124 = unaff_ESI;
  (**(code **)(*unaff_RDI + 0x640))();
  plVar6 = local_e0;
  if ((((local_d8 == '\0') && (local_e0 != (longlong *)0x0)) && (FUN_00d50b00(), local_d8 != '\0'))
     && (local_e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0027c9f0();
  plVar7 = local_e0;
  if (((local_d8 == '\0') && (local_e0 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_d8 != '\0' && (local_e0 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  local_198 = (**(code **)(*plVar6 + 0x578))();
  (**(code **)(*unaff_RDI + 0x570))();
  (**(code **)(*unaff_RDI + 0x480))();
  lVar10 = DAT_026fc758;
  if (DAT_026fc758 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_026fc760;
  if (DAT_026fc760 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_026d80e8;
  if (DAT_026d80e8 != 0) {
    FUN_00d50b00();
  }
  local_108 = lVar10;
  local_1c0 = lVar4;
  local_1b8 = lVar3;
  FUN_002bd7b0(&local_1b8,&local_1c0,3);
  FUN_000b6830();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_e0 = (longlong *)&DAT_025df260;
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  local_e0 = (longlong *)&DAT_0253d630;
  if ((local_b8 != '\0') && (CONCAT44(uStack_bc,local_c0) != 0)) {
    FUN_00d50b20();
  }
  local_e0 = &DAT_024c5048;
  if (((char)local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  if (local_40 == 0) {
    local_f8 = ZEXT816(0);
  }
  else {
    local_d8 = '\0';
    local_e0 = (undefined8 *)0x0;
    local_c0 = 0;
    local_c8 = 0;
    if (*(int *)(local_40 + 0xc) < 1) {
      local_f8 = ZEXT816(0);
    }
    else {
      fVar5 = (float)local_198;
      local_1b0 = DAT_02677e28;
      local_f8 = ZEXT816(0);
      piVar11 = &DAT_023b1780;
      lVar10 = 0;
      do {
        puVar2 = *(undefined8 **)(*(longlong *)(local_40 + 0x10) + lVar10 * 8);
        local_e0 = puVar2;
        if (*piVar11 <= local_124) {
          (**(code **)(*unaff_RDI + 0x4a0))();
          local_1a8 = ZEXT416((uint)(float)*(int *)(local_40 + 0xc));
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*unaff_RDI + 0x4a0))();
          iVar1 = *(int *)(local_40 + 0xc);
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          local_1a8._0_4_ = local_1a8._0_4_ * (float)local_198;
          local_f8 = blendps(ZEXT816(0),local_1a8,1);
          if (0 < iVar1) {
            local_120 = (float)(**(code **)(*plVar6 + 0x598))();
            (**(code **)(*unaff_RDI + 0x4a0))();
            local_11c = (float)*(int *)(local_40 + 0xc);
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            auVar13._4_12_ = local_1a8._4_12_;
            auVar13._0_4_ = local_1a8._0_4_ - local_120 * local_11c;
            local_f8 = blendps(local_f8,auVar13,1);
          }
          plVar9 = (longlong *)FUN_00e8fc40();
          FUN_0006daf0();
          *(undefined4 *)(plVar9 + 0x27) = 0;
          plVar9[0x2e] = 0;
          *(undefined4 *)(plVar9 + 0x2f) = 0;
          plVar9[0x30] = 0;
          *(undefined1 *)(plVar9 + 0x31) = 0;
          plVar9[0x28] = 0;
          plVar9[0x29] = 0;
          *(undefined4 *)(plVar9 + 0x2a) = 0;
          plVar9[0x2b] = 0;
          plVar9[0x2c] = 0;
          *(undefined8 *)((longlong)plVar9 + 0x165) = 0;
          *(undefined8 *)((longlong)plVar9 + 0x18c) = 0;
          *(undefined8 *)((longlong)plVar9 + 0x194) = 0;
          *(undefined8 *)((longlong)plVar9 + 0x199) = 0;
          plVar9[0x35] = 0;
          plVar9[0x36] = 0;
          plVar9[0x37] = 0;
          plVar9[0x38] = 0;
          *plVar9 = (longlong)&DAT_02677e10;
          plVar9[2] = (longlong)&DAT_026788e8;
          plVar9[0x39] = (longlong)&DAT_02678928;
          *(undefined4 *)((longlong)plVar9 + 500) = 0;
          *(undefined1 *)(plVar9 + 0x3f) = 0;
          plVar9[0x43] = 0;
          plVar9[0x3c] = 0;
          plVar9[0x3d] = 0;
          plVar9[0x3a] = 0;
          plVar9[0x3b] = 0;
          *(undefined1 *)(plVar9 + 0x3e) = 0;
          *(undefined8 *)((longlong)plVar9 + 0x1fc) = 0;
          *(undefined8 *)((longlong)plVar9 + 0x204) = 0;
          *(undefined8 *)((longlong)plVar9 + 0x20c) = 0;
          (*local_1b0)();
          (**(code **)(*plVar9 + 0x4d0))();
          FUN_01d0fe80();
          local_110 = 0;
          FUN_00d50b00();
          local_110 = '\x01';
          local_118 = unaff_RDI;
          (**(code **)(*plVar9 + 0xa20))();
          if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01cef4c0();
          lVar4 = DAT_026fc768;
          if (DAT_026fc768 != 0) {
            FUN_00d50b00();
          }
          local_188 = lVar4;
          local_180 = '\x01';
          (**(code **)(*plVar9 + 0xa10))();
          if ((local_180 != '\0') && (local_188 != 0)) {
            FUN_00d50b20();
          }
          local_170 = '\0';
          local_178 = puVar2;
          FUN_01d51a40();
          local_98 = 0;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_98 = '\x01';
          local_a0 = local_40;
          FUN_01cef3b0();
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_170 != '\0') && (local_178 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar9 + 0xa80))();
          lVar4 = DAT_026f6f70;
          if (DAT_026f6f70 != 0) {
            FUN_00d50b00();
          }
          lVar3 = DAT_026fc750;
          local_168 = lVar4;
          local_160 = '\x01';
          if (DAT_026fc750 != 0) {
            FUN_00d50b00();
          }
          local_158 = lVar3;
          local_150 = '\x01';
          local_148 = 0;
          local_140 = '\0';
          FUN_00d31230(&local_148,&local_158);
          local_88 = 0;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_88 = '\x01';
          local_90 = local_40;
          (**(code **)(*plVar9 + 0x6a8))();
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_140 != '\0') && (local_148 != 0)) {
            FUN_00d50b20();
          }
          if ((local_150 != '\0') && (local_158 != 0)) {
            FUN_00d50b20();
          }
          if ((local_160 != '\0') && (local_168 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar9 + 0xa18))();
          lVar4 = local_108;
          local_78 = 0;
          if (local_100 == '\0') {
            if (local_108 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_100 = '\0';
          }
          local_78 = '\x01';
          local_80 = lVar4;
          uVar8 = (**(code **)(*plVar9 + 0xa88))();
          FUN_01d5eb20(uVar8,&local_80);
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            FUN_01d65230();
            local_68 = 0;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_68 = '\x01';
            local_70 = local_40;
            (**(code **)(*plVar9 + 0x6a8))();
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          local_130 = '\0';
          local_138 = plVar9;
          (**(code **)(*unaff_RDI + 0x450))();
          if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_f8._0_4_ = local_f8._0_4_ + fVar5 + DAT_02390d00;
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        lVar10 = lVar10 + 1;
        local_c8 = CONCAT44(local_c8._4_4_,(int)lVar10);
        piVar11 = piVar11 + 1;
      } while ((int)lVar10 < *(int *)(local_40 + 0xc));
    }
    FUN_00018280();
  }
  uVar12 = (**(code **)(*unaff_RDI + 0x4d8))();
  auVar13 = insertps(local_f8,(float)local_198,0x10);
  (**(code **)(*unaff_RDI + 0x4d0))(uVar12,auVar13._0_8_);
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


