// Function: FUN_0063ffb0
// Address: 0063ffb0
// Size: 7102 bytes
// Class: MDURLOpenedController


/* WARNING: Removing unreachable block (ram,0x006417c7) */
/* WARNING: Removing unreachable block (ram,0x0064026d) */
/* WARNING: Removing unreachable block (ram,0x00640279) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0063ffb0(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  void *pvVar6;
  longlong **pplVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint7 uVar12;
  longlong *plVar11;
  int iVar13;
  int iVar14;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar15;
  longlong *plVar16;
  bool bVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  longlong *local_1a0;
  char local_198;
  longlong *local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong *local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  char local_a8;
  undefined4 local_9c;
  longlong *local_98;
  byte local_89;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  int local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  lVar5 = unaff_RDI[0x10];
  local_38 = param_2;
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  local_c8 = lVar5;
  if (*local_38 != 0) {
    FUN_004405c0();
    if (local_80 == (longlong *)0x0) {
      bVar17 = false;
    }
    else {
      (**(code **)(*unaff_RDI + 0x5e0))();
      bVar17 = local_48 != (longlong *)0x0;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar17) {
      FUN_004405c0();
      plVar11 = local_80;
      if (((((char)local_78 == '\0') && (local_80 != (longlong *)0x0)) &&
          (FUN_00d50b00(), (char)local_78 != '\0')) && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_004b5af0();
      plVar16 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_004b8550();
      plVar10 = local_80;
      if ((char)local_78 == '\0') {
        if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_78 != '\0')) &&
           (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78._0_1_ = '\0';
      }
      if (plVar16 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x5e0))();
      FUN_0078b9c0();
      plVar16 = local_80;
      if ((char)local_78 == '\0') {
        if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_78 != '\0')) &&
           (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78._0_1_ = '\0';
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar16 != (longlong *)0x0) {
        local_50 = plVar10;
        local_78._0_1_ = '\0';
        local_80 = (longlong *)0x0;
        local_88 = plVar16;
        local_70 = plVar16;
        local_68 = 0xffffffff;
        local_60 = 0;
        local_68._4_4_ = 0;
        while( true ) {
          if (local_68._4_4_ != 0) {
            if (local_68._4_4_ < 1) {
              iVar13 = -local_68._4_4_;
            }
            else {
              iVar13 = (int)local_68 - local_68._4_4_;
              local_68 = CONCAT44(local_68._4_4_,iVar13);
              FUN_00d23690();
              local_60 = local_60 + local_68._4_4_;
              iVar13 = 0;
            }
            local_68 = CONCAT44(iVar13,(int)local_68);
          }
          lVar5 = (longlong)(int)local_68;
          iVar13 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar13);
          if (*(int *)((longlong)local_70 + 0xc) <= iVar13) break;
          local_80 = *(longlong **)(local_70[2] + 8 + lVar5 * 8);
          uVar18 = FUN_004f9670();
          plVar16 = local_48;
          if (local_40 == '\0') {
            if (((local_48 != (longlong *)0x0) && (uVar18 = FUN_00d50b00(), local_40 != '\0')) &&
               (local_48 != (longlong *)0x0)) {
              uVar18 = FUN_00d50b20();
            }
          }
          else {
            local_40 = '\0';
          }
          if (plVar16 != (longlong *)0x0) {
            local_1a0 = local_80;
            local_198 = '\0';
            FUN_004b8020(uVar18,&local_1a0);
            plVar16 = local_48;
            if (local_40 == '\0') {
              if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
                 (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_40 = '\0';
            }
            if ((local_198 != '\0') && (local_1a0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar16 != (longlong *)0x0) {
              local_40 = '\0';
              local_48 = plVar16;
              FUN_00d23f50();
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        FUN_000be170();
        FUN_00d50b20();
        plVar10 = local_50;
      }
      if (*(int *)((longlong)plVar10 + 0xc) == 0) {
LAB_00640497:
        FUN_00d50b20();
      }
      else {
        FUN_004b8a30();
        local_78._0_1_ = '\0';
        local_80 = (longlong *)0x0;
        local_68 = 0xffffffff;
        local_60 = 0;
        local_68._4_4_ = 0;
        local_70 = plVar10;
        while( true ) {
          if (local_68._4_4_ != 0) {
            if (local_68._4_4_ < 1) {
              iVar13 = -local_68._4_4_;
            }
            else {
              iVar13 = (int)local_68 - local_68._4_4_;
              local_68 = CONCAT44(local_68._4_4_,iVar13);
              FUN_00d23690();
              local_60 = local_60 + local_68._4_4_;
              iVar13 = 0;
            }
            local_68 = CONCAT44(iVar13,(int)local_68);
          }
          lVar5 = (longlong)(int)local_68;
          iVar13 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar13);
          if (*(int *)((longlong)local_70 + 0xc) <= iVar13) break;
          local_190 = *(longlong **)(local_70[2] + 8 + lVar5 * 8);
          local_188 = '\0';
          local_80 = local_190;
          FUN_004b8440();
          if ((local_188 != '\0') && (local_190 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00274d30();
        FUN_004b8a40();
        if (plVar10 != (longlong *)0x0) goto LAB_00640497;
      }
      if (plVar11 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if ((local_c8 == 0) || (*local_38 == 0)) {
LAB_006409be:
    bVar17 = false;
    goto LAB_006409c1;
  }
  if (*(longlong *)(local_c8 + 0x308) == 0) {
    FUN_004405c0();
    plVar11 = local_80;
    if (((((char)local_78 == '\0') && (local_80 != (longlong *)0x0)) &&
        (FUN_00d50b00(), (char)local_78 != '\0')) && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_58 = plVar11;
    FUN_0051be00();
    plVar11 = local_80;
    if ((((char)local_78 == '\0') && (local_80 != (longlong *)0x0)) &&
       ((FUN_00d50b00(), (char)local_78 != '\0' && (local_80 != (longlong *)0x0)))) {
      FUN_00d50b20();
    }
    local_88 = plVar11;
    FUN_00521db0();
    (**(code **)(*local_48 + 0x628))();
    local_50 = local_80;
    if ((char)local_78 == '\0') {
      if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_78 != '\0')) &&
         (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_78._0_1_ = '\0';
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_004b5af0();
    plVar11 = local_80;
    if ((char)local_78 == '\0') {
      if (local_80 == (longlong *)0x0) goto LAB_00640975;
      FUN_00d50b00();
      if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_0064073b:
      local_78._0_1_ = '\0';
      local_80 = (longlong *)0x0;
      local_98 = plVar11;
      local_70 = plVar11;
      local_68 = 0xffffffff;
      local_60 = 0;
      local_68._4_4_ = 0;
      plVar16 = (longlong *)0x0;
      bVar15 = false;
      while( true ) {
        if (local_68._4_4_ != 0) {
          if (local_68._4_4_ < 1) {
            iVar13 = -local_68._4_4_;
          }
          else {
            iVar13 = (int)local_68 - local_68._4_4_;
            local_68 = CONCAT44(local_68._4_4_,iVar13);
            FUN_00d23690();
            local_60 = local_60 + local_68._4_4_;
            iVar13 = 0;
          }
          local_68 = CONCAT44(iVar13,(int)local_68);
        }
        lVar5 = (longlong)(int)local_68;
        iVar14 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar14);
        iVar13 = *(int *)((longlong)local_70 + 0xc);
        if (iVar13 <= iVar14) break;
        lVar9 = local_70[2];
        local_80 = *(longlong **)(lVar9 + 8 + lVar5 * 8);
        iVar3 = FUN_003b7980();
        if (iVar3 != 0) break;
        pvVar6 = _pthread_getspecific((pthread_key_t)lVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_150 = local_80;
        local_148 = '\0';
        FUN_004a5340();
        plVar11 = local_48;
        if (local_40 == '\0') {
          if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
             (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar10 = local_80;
        if ((plVar11 == (longlong *)0x0) || (local_88 != plVar11)) {
          if (plVar11 != (longlong *)0x0) goto LAB_00640778;
        }
        else {
          if (local_80 == plVar16) {
            if ((!bVar15) && (local_80 != (longlong *)0x0)) {
              plVar10 = plVar16;
              if ((char)local_78 != '\0') goto LAB_006408e6;
              bVar15 = true;
              FUN_00d50b00();
            }
          }
          else {
            if ((char)local_78 == '\0') {
              if (local_80 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              if ((bVar15) && (plVar16 != (longlong *)0x0)) {
                FUN_00d50b20();
                plVar16 = plVar10;
                bVar15 = true;
                goto LAB_00640778;
              }
            }
            else {
              if ((bVar15) && (plVar16 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_006408e6:
              local_78._0_1_ = '\0';
            }
            plVar16 = plVar10;
            bVar15 = true;
          }
LAB_00640778:
          FUN_00d50b20();
        }
      }
      FUN_00274d30();
      FUN_00d50b20();
      plVar11 = local_50;
      bVar17 = plVar16 == (longlong *)0x0;
      if ((!bVar17) && (iVar13 <= iVar14)) {
        FUN_003b7290();
        bVar17 = false;
      }
    }
    else {
      if (local_80 != (longlong *)0x0) goto LAB_0064073b;
LAB_00640975:
      bVar17 = true;
      bVar15 = false;
      plVar11 = local_50;
    }
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_88 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (!(bool)(!bVar15 | bVar17)) {
      FUN_00d50b20();
    }
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_006409be;
  }
  uVar18 = FUN_0053a050();
  plVar11 = local_80;
  local_c0 = local_80;
  if ((char)local_78 == '\0') {
    if (local_80 == (longlong *)0x0) goto LAB_006406d6;
    FUN_00d50b00();
    if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_00640679:
    if (*(int *)((longlong)plVar11 + 0xc) != 0) {
      FUN_00440fc0();
      if (local_48 == (longlong *)0x0) {
        bVar1 = 1;
      }
      else {
        FUN_00440fc0();
        plVar11 = local_b0;
        if (local_a8 == '\0') {
          if (local_b0 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a8 = '\0';
        }
        local_80 = plVar11;
        local_78._0_1_ = '\0';
        bVar1 = FUN_00d24090();
        if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        bVar1 = bVar1 ^ 1;
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar1 != 0) {
        FUN_00d23310();
        plVar11 = local_80;
        pplVar7 = &local_78;
        if ((char)local_78 == '\0') {
          pplVar7 = &local_48;
        }
        local_48 = (longlong *)CONCAT71(local_48._1_7_,(char)local_78);
        *(undefined1 *)pplVar7 = 0;
        if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_48 == '\0') && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        FUN_00441090();
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    local_9c = 0;
  }
  else {
    if (local_80 != (longlong *)0x0) goto LAB_00640679;
LAB_006406d6:
    local_9c = (undefined4)CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
  }
  FUN_00440fc0();
  plVar11 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_0064e9c0();
  plVar16 = local_80;
  if (((char)local_78 == '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (plVar11 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_88 = plVar16;
  if (*unaff_RSI != 0) {
    FUN_00227020();
    plVar10 = local_80;
    plVar11 = (longlong *)*local_38;
    if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 == plVar11) goto LAB_00640c53;
    bVar1 = FUN_016ae5f0();
    local_98 = DAT_0280a6b8;
    local_89 = DAT_0280a6b8 == (longlong *)0x0 | bVar1 ^ 1;
    if (local_89 == 0) {
      FUN_00d50b00();
    }
    else {
      local_98 = (longlong *)0x0;
    }
    FUN_00d6f370();
    local_180 = DAT_026de538;
    if (DAT_026de538 != 0) {
      FUN_00d50b00();
    }
    local_178 = '\x01';
    FUN_00d70f90();
    FUN_00440fa0();
    plVar11 = local_98;
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_004405c0();
    uVar18 = FUN_004b5af0();
    plVar16 = local_80;
    if ((char)local_78 == '\0') {
      if (((local_80 != (longlong *)0x0) && (uVar18 = FUN_00d50b00(), (char)local_78 != '\0')) &&
         (local_80 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
    }
    else {
      local_78._0_1_ = '\0';
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
    iVar13 = 0;
    if (plVar16 != (longlong *)0x0) {
      local_78._0_1_ = '\0';
      local_80 = (longlong *)0x0;
      local_b8 = plVar16;
      local_70 = plVar16;
      local_68 = 0xffffffff;
      local_60 = 0;
      local_50 = (longlong *)0x0;
      local_58 = (longlong *)0x0;
      do {
        if (iVar13 != 0) {
          if (iVar13 < 1) {
            iVar13 = -iVar13;
          }
          else {
            local_68 = CONCAT44(local_68._4_4_,(int)local_68 - iVar13);
            FUN_00d23690(uVar18,iVar13);
            local_60 = local_60 + local_68._4_4_;
            iVar13 = 0;
          }
          local_68 = CONCAT44(iVar13,(int)local_68);
        }
        lVar5 = (longlong)(int)local_68;
        iVar13 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar13);
        if (*(int *)((longlong)local_70 + 0xc) <= iVar13) {
          iVar13 = 0;
          goto LAB_00641086;
        }
        local_80 = *(longlong **)(local_70[2] + 8 + lVar5 * 8);
        cVar2 = FUN_003b7710();
        plVar11 = DAT_026f6fd0;
        if (cVar2 != '\0') {
          if (DAT_026f6fd0 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          dVar19 = (double)FUN_00e7d6f0();
          uVar8 = (ulonglong)(dVar19 * DAT_023907c0);
          dVar19 = dVar19 * DAT_023907c0 - _DAT_023907c8;
          FUN_0071a120();
          if (((local_40 == '\0') && (local_48 != (longlong *)0x0)) &&
             ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (longlong *)0x0)))) {
            FUN_00d50b20();
          }
          bVar1 = (byte)(((longlong)dVar19 & (longlong)uVar8 >> 0x3f | uVar8) / 3);
          local_b0 = plVar11;
          local_a8 = '\0';
          FUN_000175c0();
          plVar16 = local_48;
          if (local_40 == '\0') {
            if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
               (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40 = '\0';
          }
          if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar16 != (longlong *)0x0) {
            local_40 = '\0';
            local_48 = plVar16;
            bVar1 = FUN_00c70bc0();
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((plVar16 != (longlong *)0x0 & bVar1) != 0) goto LAB_00641153;
        }
        FUN_003b7950();
        local_170 = local_88;
        local_168 = '\0';
        uVar4 = (**(code **)(*local_48 + 0x50))();
        uVar18 = extraout_XMM0_Qa;
        if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
        plVar11 = local_80;
        if ((char)uVar4 == '\0') {
LAB_00640da0:
          plVar16 = (longlong *)((ulonglong)local_50 & 0xffffffff);
        }
        else {
          uVar12 = (uint7)(uint3)((uint)uVar4 >> 8);
          if (local_80 == local_58) {
            if (((char)local_50 != '\0') || (local_80 == (longlong *)0x0)) goto LAB_00640da0;
            plVar11 = local_58;
            if ((char)local_78 == '\0') {
              plVar16 = (longlong *)CONCAT71(uVar12,1);
              uVar18 = FUN_00d50b00();
              goto LAB_00640da6;
            }
LAB_00641034:
            local_78._0_1_ = '\0';
          }
          else {
            if ((char)local_78 != '\0') {
              if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                uVar18 = FUN_00d50b20();
              }
              goto LAB_00641034;
            }
            if (local_80 != (longlong *)0x0) {
              uVar18 = FUN_00d50b00();
            }
            plVar16 = (longlong *)CONCAT71(uVar12,1);
            if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              uVar18 = FUN_00d50b20();
              local_58 = plVar11;
              goto LAB_00640da6;
            }
          }
          plVar16 = (longlong *)CONCAT71(uVar12,1);
          local_58 = plVar11;
        }
LAB_00640da6:
        plVar11 = local_98;
        iVar13 = local_68._4_4_;
        local_50 = plVar16;
      } while( true );
    }
    local_50 = (longlong *)0x0;
    local_58 = (longlong *)0x0;
    plVar16 = local_88;
    goto LAB_006414b1;
  }
LAB_00640c53:
  bVar17 = false;
  local_50 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
LAB_0064170a:
  if (plVar16 != (longlong *)0x0) {
    plVar11 = local_50;
    if (local_58 != (longlong *)0x0) {
      if ((char)local_50 == '\0') {
        plVar11 = (longlong *)0x0;
      }
      else {
        local_58 = (longlong *)0x0;
        FUN_00d50b20();
        plVar11 = (longlong *)0x0;
      }
    }
    FUN_004405c0();
    FUN_004b5af0();
    plVar16 = local_80;
    if ((char)local_78 == '\0') {
      if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_78 != '\0')) &&
         (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_78._0_1_ = '\0';
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar16 == (longlong *)0x0) {
      local_58 = (longlong *)0x0;
      local_50 = plVar11;
    }
    else {
      local_78._0_1_ = '\0';
      local_80 = (longlong *)0x0;
      local_98 = plVar16;
      local_70 = plVar16;
      local_68 = 0xffffffff;
      local_60 = 0;
      local_58 = (longlong *)0x0;
      while( true ) {
        lVar5 = (longlong)(int)local_68;
        iVar13 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar13);
        if (*(int *)((longlong)local_70 + 0xc) <= iVar13) break;
        local_80 = *(longlong **)(local_70[2] + 8 + lVar5 * 8);
        FUN_003b7950();
        plVar16 = local_48;
        local_d8 = 0;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_d8 = '\x01';
        local_e0 = plVar16;
        uVar18 = (**(code **)(*local_88 + 0x50))();
        cVar2 = (char)uVar18;
        if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
        plVar16 = local_80;
        plVar10 = local_58;
        if (cVar2 != '\0') {
          cVar2 = (char)plVar11;
          if (local_80 == local_58) {
            if ((cVar2 == '\0') && (local_80 != (longlong *)0x0)) {
              plVar16 = local_58;
              if ((char)local_78 != '\0') goto LAB_006418e5;
              local_50 = (longlong *)CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
              FUN_00d50b00();
              plVar10 = local_58;
              plVar11 = local_50;
            }
          }
          else if ((char)local_78 == '\0') {
            if (local_80 != (longlong *)0x0) {
              uVar18 = FUN_00d50b00();
            }
            local_50 = (longlong *)CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
            plVar10 = plVar16;
            plVar11 = local_50;
            if ((cVar2 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
              local_58 = plVar16;
              plVar10 = local_58;
              plVar11 = local_50;
            }
          }
          else {
            if ((cVar2 != '\0') && (local_58 != (longlong *)0x0)) {
              uVar18 = FUN_00d50b20();
            }
LAB_006418e5:
            local_78._0_1_ = '\0';
            plVar10 = plVar16;
            plVar11 = (longlong *)CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
          }
        }
        local_50 = plVar11;
        local_58 = plVar10;
        cVar2 = FUN_003b7710();
        if ((cVar2 != '\0') || (cVar2 = FUN_003b7780(), plVar11 = local_50, cVar2 != '\0')) {
          if (local_58 == (longlong *)0x0) {
            local_58 = (longlong *)0x0;
            plVar11 = local_50;
          }
          else {
            if ((char)local_50 != '\0') {
              FUN_00d50b20();
            }
            local_50 = (longlong *)0x0;
            local_58 = (longlong *)0x0;
            plVar11 = local_50;
          }
          break;
        }
        if (local_68._4_4_ != 0) {
          if (local_68._4_4_ < 1) {
            iVar13 = -local_68._4_4_;
          }
          else {
            local_68 = CONCAT44(local_68._4_4_,(int)local_68 - local_68._4_4_);
            FUN_00d23690();
            local_60 = local_60 + local_68._4_4_;
            iVar13 = 0;
          }
          local_68 = CONCAT44(iVar13,(int)local_68);
        }
      }
      local_50 = plVar11;
      FUN_00274d30();
      FUN_00d50b20();
      if (local_58 == (longlong *)0x0) {
        local_58 = (longlong *)0x0;
      }
      else {
        FUN_003b72f0();
      }
    }
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_9c == '\0') {
    FUN_00d50b20();
  }
LAB_006409c1:
  if (*unaff_RSI != 0) {
    local_140 = *local_38;
    local_138 = '\0';
    FUN_00227060();
    if ((local_138 != '\0') && (local_140 != 0)) {
      FUN_00d50b20();
    }
  }
  if (bVar17) {
    FUN_0064f6f0();
  }
  if (local_c8 != 0) {
    FUN_00d50b20();
  }
  return;
LAB_00641153:
  bVar1 = 1;
  if (local_98 == (longlong *)0x0) {
    bVar17 = false;
LAB_00641b8e:
    iVar13 = 0;
  }
  else {
    FUN_003b7950();
    plVar11 = local_b0;
    if (local_a8 == '\0') {
      if (local_b0 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a8 = '\0';
    }
    FUN_004b5c00();
    plVar16 = local_48;
    if (local_48 == (longlong *)0x0) {
      bVar17 = false;
      plVar16 = (longlong *)0x0;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      bVar17 = true;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
      bVar17 = true;
    }
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar16 == (longlong *)0x0) goto LAB_00641b8e;
    iVar13 = FUN_003b7780();
    bVar1 = 0;
  }
  plVar16 = local_50;
  if (local_58 != (longlong *)0x0) {
    if ((char)local_50 == '\0') {
      plVar16 = (longlong *)0x0;
    }
    else {
      local_58 = (longlong *)0x0;
      FUN_00d50b20();
      plVar16 = (longlong *)0x0;
    }
  }
  if ((bool)(!bVar17 | bVar1)) {
    local_58 = (longlong *)0x0;
    plVar11 = local_98;
    local_50 = plVar16;
  }
  else {
    FUN_00d50b20();
    local_58 = (longlong *)0x0;
    plVar11 = local_98;
    local_50 = plVar16;
  }
LAB_00641086:
  plVar16 = local_88;
  FUN_00274d30();
  uVar18 = FUN_00d50b20();
  if (local_58 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
  }
  else {
    local_b8 = (longlong *)CONCAT44(local_b8._4_4_,(int)CONCAT71((int7)((ulonglong)uVar18 >> 8),1));
    if (plVar11 == (longlong *)0x0) {
      local_d0 = 0;
    }
    else {
      local_158 = '\0';
      local_160 = plVar16;
      uVar18 = FUN_004b5c00(extraout_XMM0_Qa_00,&local_160);
      plVar11 = local_80;
      if (local_80 == (longlong *)0x0) {
        local_d0 = 0;
        plVar11 = (longlong *)0x0;
      }
      else if ((char)local_78 == '\0') {
        uVar18 = FUN_00d50b00();
        local_d0 = CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
        if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78._0_1_ = '\0';
        local_d0 = CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
      }
      if ((local_158 != '\0') && (local_160 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        local_b8 = (longlong *)((ulonglong)local_b8 & 0xffffffff00000000);
        iVar13 = FUN_003b7780();
        local_b8 = (longlong *)((ulonglong)local_b8 & 0xffffffff00000000);
      }
    }
    plVar11 = DAT_026f6fd0;
    if (DAT_026f6fd0 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    dVar19 = (double)FUN_00e7d6f0();
    uVar8 = (ulonglong)(dVar19 * DAT_023907c0);
    dVar19 = dVar19 * DAT_023907c0 - _DAT_023907c8;
    FUN_0071a120();
    if (((((char)local_78 == '\0') && (local_80 != (longlong *)0x0)) &&
        (FUN_00d50b00(), (char)local_78 != '\0')) && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar1 = (byte)(((longlong)dVar19 & (longlong)uVar8 >> 0x3f | uVar8) / 3);
    local_48 = plVar11;
    local_40 = '\0';
    FUN_000175c0();
    plVar16 = local_80;
    if ((char)local_78 == '\0') {
      if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_78 != '\0')) &&
         (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_78._0_1_ = '\0';
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar16 != (longlong *)0x0) {
      local_78._0_1_ = '\0';
      local_80 = plVar16;
      bVar1 = FUN_00c70bc0();
      if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((plVar16 != (longlong *)0x0 & bVar1) == 0) {
      FUN_004405c0();
      FUN_004b5af0();
      plVar11 = local_80;
      if ((char)local_78 == '\0') {
        if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_78 != '\0')) &&
           (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78._0_1_ = '\0';
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        local_78._0_1_ = '\0';
        local_80 = (longlong *)0x0;
        local_70 = plVar11;
        local_68 = 0xffffffff;
        local_60 = 0;
        while( true ) {
          lVar5 = (longlong)(int)local_68;
          iVar14 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar14);
          if (*(int *)((longlong)local_70 + 0xc) <= iVar14) break;
          local_80 = *(longlong **)(local_70[2] + 8 + lVar5 * 8);
          FUN_003b7290();
          if (local_68._4_4_ != 0) {
            if (local_68 < 0) {
              iVar14 = -local_68._4_4_;
            }
            else {
              local_68 = CONCAT44(local_68._4_4_,(int)local_68 - local_68._4_4_);
              FUN_00d23690();
              local_60 = local_60 + local_68._4_4_;
              iVar14 = 0;
            }
            local_68 = CONCAT44(iVar14,(int)local_68);
          }
        }
        FUN_00274d30();
        FUN_00d50b20();
      }
    }
    else {
      FUN_003b7290();
    }
    plVar11 = local_98;
    plVar16 = local_88;
    if ((char)local_d0 != '\0' && (char)local_b8 == '\0') {
      FUN_00d50b20();
      plVar11 = local_98;
      plVar16 = local_88;
    }
  }
LAB_006414b1:
  FUN_004405c0();
  FUN_004b5af0();
  plVar10 = local_80;
  if ((char)local_78 == '\0') {
    if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_78 != '\0')) &&
       (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78._0_1_ = '\0';
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar10 != (longlong *)0x0) {
    local_78._0_1_ = '\0';
    local_80 = (longlong *)0x0;
    local_b8 = plVar10;
    local_70 = plVar10;
    local_68 = 0xffffffff;
    local_60 = 0;
    local_68._4_4_ = 0;
    while( true ) {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar14 = -local_68._4_4_;
        }
        else {
          iVar14 = (int)local_68 - local_68._4_4_;
          local_68 = CONCAT44(local_68._4_4_,iVar14);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar14 = 0;
        }
        local_68 = CONCAT44(iVar14,(int)local_68);
      }
      lVar5 = (longlong)(int)local_68;
      iVar14 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar14);
      if (*(int *)((longlong)local_70 + 0xc) <= iVar14) break;
      local_80 = *(longlong **)(local_70[2] + 8 + lVar5 * 8);
      cVar2 = FUN_003b7710();
      if (cVar2 == '\0' && plVar11 != (longlong *)0x0) {
        uVar18 = FUN_003b7950();
        plVar16 = local_b0;
        local_e8 = 0;
        if (local_a8 == '\0') {
          if (local_b0 != (longlong *)0x0) {
            uVar18 = FUN_00d50b00();
          }
        }
        else {
          local_a8 = '\0';
        }
        plVar11 = local_98;
        local_e8 = '\x01';
        local_f0 = plVar16;
        FUN_004b5c00(uVar18,&local_f0);
        plVar16 = local_48;
        if (local_48 == (longlong *)0x0) {
          bVar17 = true;
          plVar16 = (longlong *)0x0;
        }
        else {
          if (local_40 == '\0') {
            FUN_00d50b00();
            bVar17 = false;
            if ((local_40 == '\0') || (local_48 == (longlong *)0x0)) goto LAB_00641646;
            FUN_00d50b20();
          }
          else {
            local_40 = '\0';
          }
          bVar17 = false;
        }
LAB_00641646:
        if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar16 != (longlong *)0x0) {
          cVar2 = FUN_003b7780();
          if (cVar2 == '\0') {
            FUN_003b7710();
            FUN_003b7740((char)iVar13 != '\0');
          }
          plVar11 = local_98;
          if (!bVar17) {
            FUN_00d50b20();
          }
        }
      }
      plVar16 = local_88;
    }
    FUN_00274d30();
    FUN_00d50b20();
  }
  local_89 = local_89 | plVar11 == (longlong *)0x0;
  bVar17 = true;
  if (local_89 == 0) {
    FUN_00d50b20();
  }
  goto LAB_0064170a;
}


