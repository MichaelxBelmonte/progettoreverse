// Function: FUN_01b3e4c0
// Address: 01b3e4c0
// Size: 3032 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01b3ea98) */
/* WARNING: Removing unreachable block (ram,0x01b3eaa4) */
/* WARNING: Removing unreachable block (ram,0x01b3e6bd) */
/* WARNING: Removing unreachable block (ram,0x01b3e6c9) */
/* WARNING: Removing unreachable block (ram,0x01b3e578) */
/* WARNING: Removing unreachable block (ram,0x01b3e584) */
/* WARNING: Removing unreachable block (ram,0x01b3e861) */
/* WARNING: Removing unreachable block (ram,0x01b3e86d) */
/* WARNING: Removing unreachable block (ram,0x01b3ec09) */
/* WARNING: Removing unreachable block (ram,0x01b3ec15) */

void FUN_01b3e4c0(void)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *unaff_RSI;
  ulonglong unaff_RDI;
  undefined7 uVar10;
  ulonglong uVar9;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined4 extraout_XMM0_Da;
  longlong local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  undefined8 *local_c8;
  char local_c0;
  undefined8 *local_b8;
  char local_b0;
  longlong *local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  undefined8 *local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  longlong *local_38;
  
  FUN_017bed60();
  plVar11 = local_68;
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar11 == (longlong *)0x0) {
LAB_01b3e5c9:
    local_40 = 0;
    plVar11 = (longlong *)0x0;
  }
  else {
    FUN_017bed60();
    (**(code **)(*local_78 + 0x368))();
    plVar11 = local_68;
    if (local_60 == '\0') {
      if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar11 == (longlong *)0x0) goto LAB_01b3e5c9;
    cVar3 = FUN_00d90870();
    if (cVar3 == '\0') {
      local_40 = 0;
      plVar11 = (longlong *)0x0;
    }
    else {
      uVar5 = FUN_017bed60();
      plVar11 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar11 = (longlong *)0x0;
        local_40 = 0;
      }
      else {
        local_40 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) &&
           (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
  }
  FUN_017bf2e0();
  plVar13 = local_68;
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar12 = plVar11;
  if (plVar13 != (longlong *)0x0) {
    FUN_017bf2e0();
    (**(code **)(*local_78 + 0x368))();
    plVar13 = local_68;
    if (local_60 == '\0') {
      if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar13 != (longlong *)0x0) {
      cVar3 = FUN_00d90870();
      if (cVar3 != '\0') {
        FUN_017bf2e0();
        plVar12 = local_68;
        uVar10 = (undefined7)(unaff_RDI >> 8);
        if (local_68 == plVar11) {
          if (((char)local_40 == '\0') && (local_68 != (longlong *)0x0)) {
            unaff_RDI = CONCAT71(uVar10,1);
            plVar12 = plVar11;
            if (local_60 != '\0') goto LAB_01b3e7b7;
            unaff_RDI = CONCAT71(uVar10,1);
            FUN_00d50b00();
          }
          else {
            unaff_RDI = local_40 & 0xffffffff;
            plVar12 = plVar11;
          }
joined_r0x01b3e7a7:
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_60 == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            unaff_RDI = CONCAT71(uVar10,1);
            if (((char)local_40 != '\0') && (plVar11 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto joined_r0x01b3e7a7;
          }
          unaff_RDI = CONCAT71(uVar10,1);
          if (((char)local_40 != '\0') && (plVar11 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_01b3e7b7:
        local_40 = unaff_RDI & 0xffffffff;
      }
      FUN_00d50b20();
    }
  }
  FUN_017bf050();
  plVar11 = local_68;
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar13 = plVar12;
  if (plVar11 != (longlong *)0x0) {
    FUN_017bf050();
    (**(code **)(*local_78 + 0x368))();
    plVar11 = local_68;
    if (local_60 == '\0') {
      if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar11 != (longlong *)0x0) {
      cVar3 = FUN_00d90870();
      if (cVar3 != '\0') {
        FUN_017bf050();
        plVar13 = local_68;
        uVar10 = (undefined7)(unaff_RDI >> 8);
        if (local_68 == plVar12) {
          if (((char)local_40 == '\0') && (local_68 != (longlong *)0x0)) {
            uVar9 = CONCAT71(uVar10,1);
            plVar13 = plVar12;
            if (local_60 != '\0') goto LAB_01b3e95b;
            uVar9 = CONCAT71(uVar10,1);
            FUN_00d50b00();
          }
          else {
            uVar9 = local_40 & 0xffffffff;
            plVar13 = plVar12;
          }
joined_r0x01b3e94b:
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_60 == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            uVar9 = CONCAT71(uVar10,1);
            if (((char)local_40 != '\0') && (plVar12 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto joined_r0x01b3e94b;
          }
          uVar9 = CONCAT71(uVar10,1);
          if (((char)local_40 != '\0') && (plVar12 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_01b3e95b:
        local_40 = uVar9 & 0xffffffff;
      }
      FUN_00d50b20();
    }
  }
  if (plVar13 == (longlong *)0x0) {
    return;
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  plVar11 = (longlong *)*unaff_RSI;
  local_80 = puVar6;
  (**(code **)(*plVar13 + 0x368))();
  local_a0 = local_68;
  local_98 = 0;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_98 = '\x01';
  cVar3 = (**(code **)(*plVar11 + 0x50))();
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_02641258;
    *(undefined1 *)((longlong)puVar6 + 0xc) = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    (*DAT_02641270)();
    FUN_01aa3fc0();
    (**(code **)(*plVar13 + 0x388))();
    local_90 = local_68;
    local_88 = 0;
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    puVar6 = local_80;
    local_88 = '\x01';
    FUN_01aa3f40();
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01aa3f00();
    FUN_00d21140();
    FUN_00d50b20();
    goto LAB_01b3f041;
  }
  (**(code **)(*plVar13 + 0x368))();
  uVar4 = FUN_00d8c7a0();
  FUN_00d8f140(extraout_XMM0_Da,uVar4);
  plVar12 = local_68;
  plVar11 = (longlong *)*unaff_RSI;
  if (plVar11 == local_68) {
    if ((*(char *)(unaff_RSI + 1) == '\0') && (local_68 != (longlong *)0x0)) {
      local_38 = plVar13;
      if (local_60 != '\0') goto LAB_01b3eb6f;
      FUN_00d50b00();
      goto LAB_01b3ec78;
    }
LAB_01b3ec80:
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    cVar3 = *(char *)(unaff_RSI + 1);
    if (local_60 == '\0') {
      local_38 = plVar13;
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = plVar12;
      if ((cVar3 != '\0') && (plVar11 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01b3ec78:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      plVar13 = local_38;
      goto LAB_01b3ec80;
    }
    *unaff_RSI = local_68;
    local_38 = plVar13;
    if ((cVar3 != '\0') && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_01b3eb6f:
    *(undefined1 *)(unaff_RSI + 1) = 1;
    local_60 = '\0';
    plVar13 = local_38;
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar7 = DAT_02704060;
  if (DAT_02704060 != 0) {
    FUN_00d50b00();
  }
  local_108 = lVar7;
  local_100 = '\x01';
  FUN_00d91000(1,&local_108);
  local_a8 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  pcVar1 = DAT_02641270;
  puVar6 = local_80;
  if (local_a8 != (longlong *)0x0) {
    local_60 = '\0';
    local_68 = (longlong *)0x0;
    local_58 = local_a8;
    local_50 = 0xffffffff;
    local_48 = 0;
    plVar11 = local_a8;
    local_38 = plVar13;
    while( true ) {
      lVar7 = (longlong)(int)local_50;
      iVar8 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar8);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar8) break;
      plVar13 = *(longlong **)(local_58[2] + 8 + lVar7 * 8);
      local_68 = plVar13;
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_02641258;
      *(undefined1 *)((longlong)puVar6 + 0xc) = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      uVar4 = (*pcVar1)();
      plVar2 = local_38;
      local_f0 = '\0';
      local_f8 = plVar13;
      (**(code **)(*local_38 + 0x400))(uVar4,&local_f8);
      plVar12 = local_78;
      uVar10 = (undefined7)((ulonglong)plVar11 >> 8);
      if (local_78 == plVar2) {
        if (((char)local_40 != '\0') || (local_78 == (longlong *)0x0)) {
          uVar9 = local_40 & 0xffffffff;
          plVar12 = local_38;
          goto joined_r0x01b3eea5;
        }
        if (local_70 == '\0') {
          FUN_00d50b00();
          goto LAB_01b3ee73;
        }
LAB_01b3ee94:
        local_70 = '\0';
        uVar9 = CONCAT71(uVar10,1);
      }
      else {
        if (local_70 != '\0') {
          if ((char)local_40 == '\0') {
            local_38 = local_78;
          }
          else {
            FUN_00d50b20();
            local_38 = plVar12;
          }
          goto LAB_01b3ee94;
        }
        if (local_78 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        uVar9 = CONCAT71(uVar10,1);
        if ((char)local_40 != '\0') {
          FUN_00d50b20();
          local_38 = plVar12;
LAB_01b3ee73:
          uVar9 = CONCAT71(uVar10,1);
          plVar12 = local_38;
        }
joined_r0x01b3eea5:
        local_38 = plVar12;
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_e8 = local_38;
      local_e0 = '\0';
      FUN_01aa3fc0();
      if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_d0 = '\0';
      local_d8 = plVar13;
      FUN_01aa3f40();
      plVar13 = local_38;
      if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01aa3f00();
      local_c0 = '\0';
      local_c8 = puVar6;
      FUN_00d21140();
      if ((local_c0 != '\0') && (local_c8 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      uVar4 = FUN_00d50b20();
      plVar11 = local_a8;
      iVar8 = local_50._4_4_;
      local_40 = uVar9 & 0xffffffff;
      local_38 = plVar13;
      if (local_50._4_4_ != 0) {
        if (local_50 < 0) {
          iVar8 = -local_50._4_4_;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
          FUN_00d23690(uVar4,local_50._4_4_);
          local_48 = local_48 + iVar8;
          iVar8 = 0;
        }
        local_50 = CONCAT44(iVar8,(int)local_50);
      }
    }
    FUN_00018280();
    FUN_00d50b20();
    puVar6 = local_80;
    plVar13 = local_38;
  }
LAB_01b3f041:
  local_b0 = '\0';
  local_b8 = puVar6;
  FUN_01ce9a80();
  if ((local_b0 != '\0') && (local_b8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_40 != '\0') && (plVar13 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


