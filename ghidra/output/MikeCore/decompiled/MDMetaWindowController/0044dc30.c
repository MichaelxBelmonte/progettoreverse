// Function: FUN_0044dc30
// Address: 0044dc30
// Size: 3599 bytes
// Class: MDMetaWindowController
// String references:
//   "%s%d-%d"
//   "%s%d"


void FUN_0044dc30(void)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong **pplVar10;
  int iVar11;
  longlong *unaff_RDI;
  bool bVar12;
  longlong *local_1c0;
  undefined1 local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  undefined8 *local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  undefined2 local_c0;
  undefined1 uStack_be;
  undefined5 uStack_bd;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  undefined8 *local_80;
  ulonglong local_78;
  longlong *local_70;
  uint local_68 [2];
  undefined2 *local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  char local_40;
  undefined1 local_31;
  
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_70 + 0x450))();
  if (((char)local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    (**(code **)(*unaff_RDI + 0xa28))();
    plVar3 = local_70;
    if (((char)local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_00d50b00();
      (**(code **)(*unaff_RDI + 0xa20))();
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      lVar9 = DAT_02705f00;
      if (DAT_02705f00 != 0) {
        FUN_00d50b00();
      }
      local_1b0 = lVar9;
      local_1a8 = '\x01';
      (**(code **)(*unaff_RDI + 0xa10))();
      if ((local_1a8 != '\0') && (local_1b0 != 0)) {
        FUN_00d50b20();
      }
    }
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &DAT_02572358;
    local_80 = puVar8;
    (*DAT_02572370)();
    if ((undefined2 *)unaff_RDI[0x48] != (undefined2 *)0x0) {
      local_68[0] = local_68[0] & 0xffffff00;
      local_70 = (longlong *)0x0;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      local_60 = (undefined2 *)unaff_RDI[0x48];
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar11 = -local_58._4_4_;
          }
          else {
            iVar11 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar11);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar11 = 0;
          }
          local_58 = CONCAT44(iVar11,(int)local_58);
        }
        lVar9 = (longlong)(int)local_58;
        iVar11 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar11);
        if (*(int *)(local_60 + 6) <= iVar11) break;
        local_1c0 = *(longlong **)(*(longlong *)(local_60 + 8) + 8 + lVar9 * 8);
        local_1b8 = 0;
        local_70 = local_1c0;
        FUN_00451150(*(longlong *)(local_60 + 8),&local_1c0);
        plVar3 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0044dde0;
          }
        }
        else if (local_48 != (longlong *)0x0) {
LAB_0044dde0:
          local_40 = '\0';
          local_48 = plVar3;
          FUN_00d235a0();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      FUN_000be170();
    }
    if (unaff_RDI[0x4b] != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar9 = unaff_RDI[0x4b];
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      FUN_00451480();
      plVar3 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_70 = plVar3;
      local_68[0] = local_68[0] & 0xffffff00;
      FUN_00d235a0();
      if (((char)local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
    }
    iVar11 = FUN_0044fe10();
    if (iVar11 == 1) {
      iVar11 = 1;
      local_78 = local_78 & 0xffffffff00000000;
    }
    else {
      iVar11 = FUN_0044fe10();
      local_78 = CONCAT44(local_78._4_4_,(uint)(iVar11 == 2));
      iVar11 = (uint)(iVar11 == 2) * 2;
    }
    FUN_01d6f8d0();
    lVar9 = DAT_02705ed8;
    if ((*(char *)((longlong)unaff_RDI + 0x249) == '\0') && ((char)unaff_RDI[0x49] != '\0')) {
      if (DAT_02705ed8 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_02705f08;
      local_1a0 = lVar9;
      local_198 = '\x01';
      if (DAT_02705f08 != 0) {
        FUN_00d50b00();
      }
      local_190 = lVar2;
      local_188 = '\x01';
      local_180 = 0;
      local_178 = '\0';
      FUN_00d31230(&local_180,&local_190);
      plVar3 = local_70;
      if ((char)local_68[0] == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68[0] = local_68[0] & 0xffffff00;
      }
      FUN_01d6f990();
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
      if ((local_198 != '\0') && (local_1a0 != 0)) {
        FUN_00d50b20();
      }
    }
    iVar5 = FUN_00451580();
    iVar6 = FUN_00451aa0();
    if (iVar5 < iVar6) {
      iVar5 = iVar6;
    }
    iVar1 = 1;
    if (iVar6 != 1) {
      iVar1 = iVar11;
    }
    if ((char)local_78 == '\0') {
      iVar1 = iVar11;
    }
    local_78 = CONCAT44(local_78._4_4_,iVar5);
    if (0 < iVar5) {
      iVar11 = 0;
      do {
        local_31 = 0;
        uStack_be = 0;
        local_c0 = 0x2021;
        iVar5 = FUN_00451aa0();
        local_60 = &local_c0;
        if (iVar11 < iVar5) {
          local_60 = (undefined2 *)&local_31;
        }
        if (iVar1 == 2) {
          local_68[0] = 3;
          local_70 = (longlong *)&DAT_024f6748;
          local_58 = CONCAT44(iVar11 + 2,iVar11 + 1);
          FUN_00d8cb40(iVar11 + 1,&local_70);
          plVar3 = local_48;
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_01d6f990();
          if (plVar3 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_68[0] = 2;
          local_70 = &DAT_024f6780;
          local_58 = CONCAT44(local_58._4_4_,iVar11 + 1);
          FUN_00d8cb40(iVar11 + 1,&local_70);
          plVar3 = local_48;
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_01d6f990();
          if (plVar3 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        iVar11 = iVar11 + iVar1;
      } while (iVar11 < (int)local_78);
    }
    if (iVar1 == 2) {
      uVar7 = FUN_01d6fde0();
      *(undefined4 *)((longlong)unaff_RDI + 0x24c) = uVar7;
      if (((char)unaff_RDI[0x49] == '\0') && (0 < (int)local_78)) {
        iVar11 = 0;
        do {
          local_31 = 0;
          uStack_be = 0;
          local_c0 = 0x2021;
          iVar5 = FUN_00451aa0();
          local_60 = &local_c0;
          if (iVar11 < iVar5) {
            local_60 = (undefined2 *)&local_31;
          }
          iVar11 = iVar11 + 1;
          local_68[0] = 2;
          local_70 = &DAT_024f6780;
          local_58 = CONCAT44(local_58._4_4_,iVar11);
          FUN_00d8cb40(&local_31,&local_70);
          plVar3 = local_48;
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_01d6f990();
          if (plVar3 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        } while ((int)local_78 != iVar11);
      }
    }
    else {
      *(undefined4 *)((longlong)unaff_RDI + 0x24c) = 0;
    }
    FUN_01d70010();
    if (local_70 == (longlong *)0x0) {
      bVar12 = false;
    }
    else {
      FUN_01d70010();
      FUN_01d65ea0();
      bVar12 = local_48 != (longlong *)0x0;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (CONCAT53(uStack_bd,CONCAT12(uStack_be,local_c0)) != 0)) {
        FUN_00d50b20();
      }
    }
    if (((char)local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar12) {
      FUN_01d70010();
      FUN_01d65ea0();
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b00();
      }
      FUN_01d62b10();
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (*(int *)((longlong)local_80 + 0xc) < 2) {
      if (*(int *)((longlong)local_80 + 0xc) == 1) {
        (**(code **)(*unaff_RDI + 0x998))();
        FUN_00d23310();
        plVar3 = local_70;
        pplVar10 = &local_48;
        if ((char)local_68[0] != '\0') {
          pplVar10 = (longlong **)local_68;
        }
        local_48 = (longlong *)CONCAT71(local_48._1_7_,(char)local_68[0]);
        *(undefined1 *)pplVar10 = 0;
        if (((char)local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_48 == '\0') && (plVar3 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        lVar9 = DAT_02705f10;
        if (DAT_02705f10 != 0) {
          FUN_00d50b00();
        }
        local_78 = lVar9;
        local_150 = lVar9;
        local_148 = '\0';
        FUN_00d90870();
        if ((local_148 != '\0') && (local_150 != 0)) {
          FUN_00d50b20();
        }
        for (iVar11 = 0; iVar5 = FUN_01d6fde0(), iVar11 < iVar5; iVar11 = iVar11 + 1) {
          FUN_01d701d0();
          FUN_01d65230();
          local_140 = plVar3;
          local_138 = '\0';
          cVar4 = (**(code **)(*local_70 + 0x50))();
          if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') break;
        }
        FUN_01d6ed40();
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_80 == (undefined8 *)0x0) {
          return;
        }
      }
      else {
        (**(code **)(*unaff_RDI + 0x998))();
        FUN_00d8ede0();
        local_90 = local_70;
        local_88 = 0;
        if ((char)local_68[0] == '\0') {
          if (local_70 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68[0] = local_68[0] & 0xffffff00;
        }
        local_88 = '\x01';
        (**(code **)(*unaff_RDI + 0x968))();
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_0044f490();
        plVar3 = local_70;
        if ((char)local_68[0] == '\0') {
          if (local_70 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68[0] = local_68[0] & 0xffffff00;
        }
        (**(code **)(*unaff_RDI + 0x6a8))();
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d6ed40();
      }
    }
    else {
      (**(code **)(*unaff_RDI + 0x998))();
      FUN_00e99dd0();
      local_b0 = local_70;
      local_a8 = 0;
      if ((char)local_68[0] == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68[0] = local_68[0] & 0xffffff00;
      }
      local_a8 = '\x01';
      (**(code **)(*unaff_RDI + 0x968))();
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar9 = DAT_027d64a0;
      local_170 = local_80;
      local_168 = '\0';
      if (DAT_027d64a0 != 0) {
        FUN_00d50b00();
      }
      local_160 = lVar9;
      local_158 = '\x01';
      FUN_00d95130();
      local_a0 = local_70;
      local_98 = 0;
      if ((char)local_68[0] == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68[0] = local_68[0] & 0xffffff00;
      }
      local_98 = '\x01';
      (**(code **)(*unaff_RDI + 0x6a8))();
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d6ed40();
    }
    FUN_00d50b20();
  }
  return;
}


