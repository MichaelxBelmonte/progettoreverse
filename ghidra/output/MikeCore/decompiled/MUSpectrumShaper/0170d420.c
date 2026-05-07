// Function: FUN_0170d420
// Address: 0170d420
// Size: 5816 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x0170d612) */
/* WARNING: Removing unreachable block (ram,0x0170d61e) */
/* WARNING: Removing unreachable block (ram,0x0170d6d6) */
/* WARNING: Removing unreachable block (ram,0x0170d6e2) */

void FUN_0170d420(longlong param_1,undefined4 param_2,char param_3)

{
  char *pcVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  pthread_key_t pVar11;
  longlong lVar12;
  char unaff_SIL;
  int iVar13;
  longlong unaff_RDI;
  bool bVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  undefined4 local_114;
  char local_b0;
  longlong local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  undefined8 local_88;
  int local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50 [8];
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  lVar6 = param_1;
  local_114 = param_2;
  pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313b00();
  pvVar5 = _pthread_getspecific((pthread_key_t)lVar6);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar16 = FUN_01505900();
  lVar3 = local_58;
  if (local_50[0] == '\0') {
    if (((local_58 != 0) && (uVar16 = FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != 0)) {
      uVar16 = FUN_00d50b20();
    }
  }
  else {
    local_50[0] = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    uVar16 = FUN_00d50b20();
  }
  local_b0 = (char)param_1;
  if (unaff_SIL == '\0') {
    bVar2 = false;
    local_a8 = 0;
    if ((char)local_114 == '\0') goto LAB_0170d979;
LAB_0170d997:
    if ((char)local_114 != '\0') {
      uVar16 = FUN_01686100(uVar16,*(undefined8 *)(unaff_RDI + 0x38));
      lVar12 = *(longlong *)(unaff_RDI + 0x68);
      lVar7 = lVar12;
      if (lVar12 != local_58) {
        if (local_50[0] == '\0') {
          if (local_58 == 0) {
            lVar7 = 0;
            goto LAB_0170d9cf;
          }
          uVar16 = FUN_00d50b00();
          lVar6 = *(longlong *)(unaff_RDI + 0x68);
          *(longlong *)(unaff_RDI + 0x68) = local_58;
          lVar7 = local_58;
        }
        else {
          local_50[0] = '\0';
          lVar7 = local_58;
LAB_0170d9cf:
          *(longlong *)(unaff_RDI + 0x68) = lVar7;
          lVar6 = lVar12;
        }
        if (lVar6 != 0) {
          uVar16 = FUN_00d50b20();
          lVar7 = local_58;
        }
      }
      if ((local_50[0] != '\0') && (lVar7 != 0)) {
        uVar16 = FUN_00d50b20();
      }
    }
    if (local_b0 != '\0') {
      uVar16 = FUN_01686ee0(uVar16,*(undefined8 *)(unaff_RDI + 0x38));
      lVar12 = *(longlong *)(unaff_RDI + 0x70);
      lVar7 = lVar12;
      if (lVar12 != local_58) {
        if (local_50[0] == '\0') {
          if (local_58 == 0) {
            lVar7 = 0;
            goto LAB_0170daca;
          }
          uVar16 = FUN_00d50b00();
          lVar6 = *(longlong *)(unaff_RDI + 0x70);
          *(longlong *)(unaff_RDI + 0x70) = local_58;
          lVar7 = local_58;
        }
        else {
          local_50[0] = '\0';
          lVar7 = local_58;
LAB_0170daca:
          *(longlong *)(unaff_RDI + 0x70) = lVar7;
          lVar6 = lVar12;
        }
        if (lVar6 != 0) {
          uVar16 = FUN_00d50b20();
          lVar7 = local_58;
        }
      }
      if ((local_50[0] != '\0') && (lVar7 != 0)) {
        uVar16 = FUN_00d50b20();
      }
    }
    if (*(longlong *)(unaff_RDI + 0x68) == 0) {
      if (*(longlong *)(unaff_RDI + 0x70) != 0) {
        if (*(char *)(unaff_RDI + 0x60) == '\0') goto LAB_0170dbd9;
        goto LAB_0170dbcc;
      }
      goto LAB_0170d982;
    }
    if (*(char *)(unaff_RDI + 0x60) == '\0') {
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar13 = FUN_018232b0();
      if ((iVar13 < 1) && (*(longlong *)(unaff_RDI + 0x70) != 0)) {
        pvVar5 = _pthread_getspecific((pthread_key_t)lVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar13 = FUN_0124ae30();
        uVar16 = extraout_XMM0_Da;
        if (iVar13 < 1) goto LAB_0170dcdf;
      }
LAB_0170dbd9:
      FUN_017105a0();
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150eb60();
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar13 = FUN_018232b0();
      if (iVar13 == 0) {
        FUN_017105a0();
        pvVar5 = _pthread_getspecific((pthread_key_t)lVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01510030();
        pvVar5 = _pthread_getspecific((pthread_key_t)lVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar13 = FUN_0124ae30();
        bVar14 = iVar13 == 0;
        uVar16 = extraout_XMM0_Da_01;
        if ((local_60 != '\0') && (local_68 != 0)) {
          uVar16 = FUN_00d50b20();
        }
        if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
          uVar16 = FUN_00d50b20();
        }
      }
      else {
        bVar14 = false;
        uVar16 = extraout_XMM0_Da_00;
      }
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        uVar16 = FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        uVar16 = FUN_00d50b20();
      }
      if ((bVar14) && (*(char *)(unaff_RDI + 0x60) != '\x01')) {
        FUN_00d64850();
        *(undefined1 *)(unaff_RDI + 0x60) = 1;
        uVar16 = FUN_00d64910();
        if (*(char *)(unaff_RDI + 0x60) != '\0') {
          uVar16 = FUN_0170f8b0();
        }
        if (param_3 == '\0') {
          uVar16 = FUN_01689d90();
        }
      }
    }
    else {
LAB_0170dbcc:
      uVar16 = FUN_0170f8b0();
    }
LAB_0170dcdf:
    pVar11 = (pthread_key_t)lVar6;
    bVar14 = *(char *)(unaff_RDI + 0x60) != '\0';
  }
  else {
    FUN_01685790();
    local_a8 = local_58;
    if (local_58 == 0) {
      *(undefined1 *)(unaff_RDI + 0x62) = 0;
      FUN_016c0a70();
      local_a8 = local_58;
      lVar6 = local_58;
      if (local_58 == 0) {
        local_a8 = 0;
        bVar2 = false;
      }
      else {
        bVar2 = true;
        if (((local_50[0] == '\0') && (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      lVar6 = local_58;
      if (((local_50[0] == '\0') && (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != 0)) {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 0x62) = 1;
      bVar2 = true;
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313b00();
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015056c0();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313b00();
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar16 = FUN_015056c0();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      uVar16 = FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x80) != 0) {
      local_50[0] = '\0';
      local_58 = 0;
      local_40 = 0xffffffff;
      local_38 = 0;
      local_40._4_4_ = 0;
      local_48 = *(longlong *)(unaff_RDI + 0x80);
      while( true ) {
        if (local_40._4_4_ != 0) {
          if (local_40._4_4_ < 1) {
            iVar13 = -local_40._4_4_;
          }
          else {
            iVar13 = (int)local_40 - local_40._4_4_;
            local_40 = CONCAT44(local_40._4_4_,iVar13);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar13 = 0;
          }
          local_40 = CONCAT44(iVar13,(int)local_40);
        }
        lVar6 = (longlong)(int)local_40;
        iVar13 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar13);
        if (*(int *)(local_48 + 0xc) <= iVar13) break;
        local_58 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar6 * 8);
        pvVar5 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c81e0();
        lVar6 = local_a0;
        if (local_98 == '\0') {
          if (local_a0 != 0) {
            FUN_00d50b00();
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_0170d830;
          }
        }
        else if (local_a0 != 0) {
LAB_0170d830:
          local_98 = '\0';
          local_a0 = 0;
          local_90 = lVar6;
          local_88 = 0xffffffff;
          local_80 = 0;
          while( true ) {
            lVar6 = (longlong)(int)local_88;
            iVar13 = (int)local_88 + 1;
            local_88 = CONCAT44(local_88._4_4_,iVar13);
            if (*(int *)(local_90 + 0xc) <= iVar13) break;
            local_a0 = *(longlong *)(*(longlong *)(local_90 + 0x10) + 8 + lVar6 * 8);
            pvVar5 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_90 + 0x10));
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01657c90();
            if (local_88._4_4_ != 0) {
              if (local_88 < 0) {
                iVar13 = -local_88._4_4_;
              }
              else {
                local_88 = CONCAT44(local_88._4_4_,(int)local_88 - local_88._4_4_);
                FUN_00d23690();
                local_80 = local_80 + local_88._4_4_;
                iVar13 = 0;
              }
              local_88 = CONCAT44(iVar13,(int)local_88);
            }
          }
          FUN_00277f20();
          FUN_00d50b20();
        }
      }
      lVar6 = local_48;
      uVar16 = FUN_01714b60();
    }
    if ((char)local_114 != '\0') goto LAB_0170d997;
LAB_0170d979:
    if (local_b0 != '\0') goto LAB_0170d997;
LAB_0170d982:
    pVar11 = (pthread_key_t)lVar6;
    bVar14 = false;
  }
  if (local_b0 != '\0') {
    FUN_01689340(uVar16,*(undefined8 *)(unaff_RDI + 0x38));
    lVar12 = *(longlong *)(unaff_RDI + 0x78);
    lVar7 = lVar12;
    if (lVar12 != local_58) {
      if (local_50[0] == '\0') {
        if (local_58 == 0) {
          lVar7 = 0;
          goto LAB_0170dd1c;
        }
        FUN_00d50b00();
        lVar6 = *(longlong *)(unaff_RDI + 0x78);
        *(longlong *)(unaff_RDI + 0x78) = local_58;
        lVar7 = local_58;
      }
      else {
        local_50[0] = '\0';
        lVar7 = local_58;
LAB_0170dd1c:
        *(longlong *)(unaff_RDI + 0x78) = lVar7;
        lVar6 = lVar12;
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
        lVar7 = local_58;
      }
    }
    if ((local_50[0] != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
    pVar11 = (pthread_key_t)lVar6;
    if (*(longlong *)(unaff_RDI + 0x78) != 0) {
      pcVar1 = (char *)(unaff_RDI + 0x61);
      if (*(char *)(unaff_RDI + 0x61) == '\0') {
        pvVar5 = _pthread_getspecific(pVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar13 = FUN_018847d0();
        pVar11 = (pthread_key_t)lVar6;
        if (0 < iVar13) {
          lVar12 = *(longlong *)(unaff_RDI + 0x78);
          pvVar5 = _pthread_getspecific(pVar11);
          if (pvVar5 != (void *)0x0) {
            lVar12 = *(longlong *)(unaff_RDI + 0x78);
            lVar7 = FUN_00e8b990();
            if (lVar7 != 0) {
              lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
          }
          pVar11 = (pthread_key_t)lVar6;
          if (*(int *)(*(longlong *)(lVar12 + 0x48) + 0x18) + 7U < 0xf) {
            FUN_00d23310();
            lVar12 = local_58;
            pVar11 = (pthread_key_t)CONCAT71((int7)((ulonglong)lVar6 >> 8),local_50[0]);
            plVar8 = (longlong *)local_50;
            if (local_50[0] == '\0') {
              plVar8 = &local_a0;
            }
            local_a0 = CONCAT71(local_a0._1_7_,local_50[0]);
            *(char *)plVar8 = '\0';
            if ((local_50[0] != '\0') && (lVar12 != 0)) {
              FUN_00d50b20();
            }
            if (((char)local_a0 != '\0') && (lVar12 != 0)) {
              FUN_00d50b20();
            }
            if (lVar12 == 0) goto LAB_0170dd95;
          }
          FUN_017105a0();
          pvVar5 = _pthread_getspecific(pVar11);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01510280();
          lVar6 = local_a0;
          pvVar5 = _pthread_getspecific(pVar11);
          lVar12 = local_a0;
          if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar6 = lVar12, lVar7 != 0)) {
            lVar6 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
          if (*(int *)(*(longlong *)(lVar6 + 0x48) + 0x18) + 7U < 0xf) {
            FUN_00d23310();
            lVar6 = local_58;
            local_78._0_1_ = local_50[0];
            plVar8 = &local_78;
            if (local_50[0] != '\0') {
              plVar8 = (longlong *)local_50;
            }
            *(char *)plVar8 = '\0';
            bVar15 = lVar6 == 0;
            if ((local_50[0] != '\0') && (lVar6 != 0)) {
              FUN_00d50b20();
            }
            pVar11 = (pthread_key_t)plVar8;
            if (((char)local_78 != '\0') && (lVar6 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar15 = false;
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((bVar15) && (*pcVar1 != '\x01')) {
            FUN_00d64850();
            *(undefined1 *)(unaff_RDI + 0x61) = 1;
            FUN_00d64910();
            if (*pcVar1 != '\0') {
              FUN_0170ff60();
            }
            if (param_3 == '\0') {
              FUN_01689d90();
            }
          }
        }
      }
      else {
        FUN_0170ff60();
      }
LAB_0170dd95:
      bVar15 = *pcVar1 != '\0';
      goto joined_r0x0170ddb2;
    }
  }
  bVar15 = false;
joined_r0x0170ddb2:
  if (unaff_SIL != '\0') {
    if (!bVar14) {
      pvVar5 = _pthread_getspecific(pVar11);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313b00();
      pvVar5 = _pthread_getspecific(pVar11);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      pvVar5 = _pthread_getspecific(pVar11);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar5 = _pthread_getspecific(pVar11);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313b00();
      pvVar5 = _pthread_getspecific(pVar11);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      lVar6 = local_68;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_178 = lVar3;
      local_170 = '\0';
      local_160 = '\0';
      local_168 = local_a8;
      uVar9 = FUN_00e7bdb0();
      uVar10 = FUN_00e7bdb0();
      local_150 = '\0';
      local_158 = 0;
      pVar11 = (pthread_key_t)&local_168;
      cVar4 = FUN_01516650(0,&local_178,uVar9,uVar10);
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
      if ((local_160 != '\0') && (local_168 != 0)) {
        FUN_00d50b20();
      }
      if ((local_170 != '\0') && (local_178 != 0)) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        pvVar5 = _pthread_getspecific(pVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01313b00();
        pvVar5 = _pthread_getspecific(pVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015058d0();
        pvVar5 = _pthread_getspecific(pVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar5 = _pthread_getspecific(pVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01313b00();
        pvVar5 = _pthread_getspecific(pVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015058d0();
        lVar6 = local_68;
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_01512830();
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
          FUN_00d50b20();
        }
        if ((local_50[0] != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        FUN_016818b0();
      }
    }
    if (!bVar15) {
      pvVar5 = _pthread_getspecific(pVar11);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313b00();
      pvVar5 = _pthread_getspecific(pVar11);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      pvVar5 = _pthread_getspecific(pVar11);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar5 = _pthread_getspecific(pVar11);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313b00();
      pvVar5 = _pthread_getspecific(pVar11);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      lVar6 = local_68;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_148 = lVar3;
      local_140 = '\0';
      local_130 = '\0';
      local_138 = local_a8;
      uVar9 = FUN_00e7bdb0();
      uVar10 = FUN_00e7bdb0();
      local_120 = '\0';
      local_128 = 0;
      pVar11 = (pthread_key_t)&local_138;
      cVar4 = FUN_01516720(0,&local_148,uVar9,uVar10);
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      if ((local_130 != '\0') && (local_138 != 0)) {
        FUN_00d50b20();
      }
      if ((local_140 != '\0') && (local_148 != 0)) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        pvVar5 = _pthread_getspecific(pVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01313b00();
        pvVar5 = _pthread_getspecific(pVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015058d0();
        pvVar5 = _pthread_getspecific(pVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar5 = _pthread_getspecific(pVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01313b00();
        pvVar5 = _pthread_getspecific(pVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015058d0();
        lVar6 = local_68;
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_01512890();
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
          FUN_00d50b20();
        }
        if ((local_50[0] != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  if ((bVar2) && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}


