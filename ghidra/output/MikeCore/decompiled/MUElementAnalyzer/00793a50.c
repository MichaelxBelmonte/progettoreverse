// Function: FUN_00793a50
// Address: 00793a50
// Size: 3673 bytes
// Class: MUElementAnalyzer
// String references:
//   "MUElementAnalyzer"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00793a50(void)

{
  pthread_key_t pVar1;
  longlong *******ppppppplVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong *******ppppppplVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  void *pvVar10;
  undefined7 uVar11;
  undefined7 extraout_var;
  char cVar12;
  pthread_key_t pVar13;
  longlong *******ppppppplVar14;
  ulonglong uVar15;
  longlong *******ppppppplVar16;
  longlong *******ppppppplVar17;
  int iVar18;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_130;
  char local_128;
  longlong *******local_120;
  char local_118;
  longlong *******local_110;
  char local_108;
  longlong *******local_100;
  char local_f8;
  longlong *******local_f0;
  char local_e8;
  longlong *******local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *******local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  uint local_94;
  longlong *******local_90;
  longlong *******local_88;
  longlong ******local_80;
  longlong *******local_78;
  undefined8 local_70;
  int local_68;
  undefined8 local_60;
  longlong *******local_58;
  longlong *******local_50;
  char local_48;
  ulonglong uVar20;
  
  FUN_01f27fe0();
  uVar8 = (*(code *)(*local_88)[0x8a])();
  cVar7 = (char)uVar8;
  if (((char)local_80 != '\0') && (local_88 != (longlong *******)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  uVar15 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1) & 0xffffffff;
  if (cVar7 == '\0') {
    return uVar15;
  }
  if (*unaff_RSI == 0) {
    return uVar15;
  }
  if (*(int *)(*unaff_RSI + 0xc) != 1) {
    return uVar15;
  }
  FUN_00d23310();
  ppppppplVar6 = local_88;
  local_50 = (longlong *******)CONCAT71(local_50._1_7_,(char)local_80);
  ppppppplVar16 = &local_80;
  if ((char)local_80 == '\0') {
    ppppppplVar16 = (longlong *******)&local_50;
  }
  *(undefined1 *)ppppppplVar16 = 0;
  if (((char)local_80 != '\0') && (local_88 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 == '\0') && (ppppppplVar6 != (longlong *******)0x0)) {
    FUN_00d50b00();
  }
  local_a8 = 0;
  if (*(longlong ********)(unaff_RDI + 0x120) != (longlong *******)0x0) {
    local_80._0_1_ = '\0';
    local_88 = (longlong *******)0x0;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_70._4_4_ = 0;
    local_78 = *(longlong ********)(unaff_RDI + 0x120);
    do {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar18 = -local_70._4_4_;
        }
        else {
          iVar18 = (int)local_70 - local_70._4_4_;
          local_70 = CONCAT44(local_70._4_4_,iVar18);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar18 = 0;
        }
        local_70 = CONCAT44(iVar18,(int)local_70);
      }
      lVar9 = (longlong)(int)local_70;
      iVar18 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar18);
      if (*(int *)((longlong)local_78 + 0xc) <= iVar18) {
        local_a8 = 0;
        ppppppplVar16 = (longlong *******)0x0;
        ppppppplVar14 = local_78;
        goto LAB_00793e27;
      }
      ppppppplVar16 = (longlong *******)local_78[2][lVar9 + 1];
      local_50 = ppppppplVar16;
      local_88 = ppppppplVar16;
      if ((DAT_026e0c38 == '\0') && (iVar18 = ___cxa_guard_acquire(), iVar18 != 0)) {
        _DAT_026e0b88 = FUN_000fddb0();
        _DAT_026e0b70 = "MUElementAnalyzer";
        _DAT_026e0b78 = 0x180;
        _DAT_026e0b80 = FUN_000fdd80;
        _DAT_026e0b90 = 0;
        uRam00000000026e0b98 = 0;
        _DAT_026e0ba0 = 0;
        _DAT_026e0c18 = 0;
        uRam00000000026e0c20 = 0;
        _DAT_026e0c28 = 0;
        DAT_026e0c2a = 1;
        _DAT_026e0ba8 = 0;
        uRam00000000026e0bb0 = 0;
        _DAT_026e0bb8 = 0;
        uRam00000000026e0bc0 = 0;
        _DAT_026e0bc8 = 0;
        uRam00000000026e0bd0 = 0;
        _DAT_026e0bd8 = 0;
        uRam00000000026e0be0 = 0;
        _DAT_026e0be8 = 0;
        uRam00000000026e0bf0 = 0;
        _DAT_026e0bf8 = 0;
        uRam00000000026e0c00 = 0;
        _DAT_026e0c08 = 0;
        uRam00000000026e0c10 = 0;
        DAT_026e0c33 = 0;
        _DAT_026e0c2b = 0;
        ___cxa_guard_release();
      }
      ppppppplVar14 = (longlong *******)&DAT_02802688;
      if (ppppppplVar16 != (longlong *******)0x0) {
        (*(code *)(*ppppppplVar16)[0x6c])();
        cVar7 = FUN_00e85ea0();
        ppppppplVar14 = (longlong *******)&local_50;
        if (cVar7 == '\0') {
          ppppppplVar14 = (longlong *******)&DAT_02802688;
        }
      }
      if (*ppppppplVar14 != (longlong ******)0x0) {
        uVar19 = FUN_00e33de0();
        lVar9 = DAT_0270b920;
        if (DAT_0270b920 != 0) {
          uVar19 = FUN_00d50b00();
        }
        local_130 = lVar9;
        local_128 = '\x01';
        FUN_000175c0(uVar19,&local_130);
        ppppppplVar16 = local_50;
        uVar8 = FUN_0006e1c0();
        ppppppplVar14 = (longlong *******)&DAT_02802688;
        if (ppppppplVar16 != (longlong *******)0x0) {
          (*(code *)(*ppppppplVar16)[0x6c])();
          uVar8 = FUN_00e85ea0();
          ppppppplVar14 = (longlong *******)&local_50;
          if ((char)uVar8 == '\0') {
            ppppppplVar14 = (longlong *******)&DAT_02802688;
          }
        }
        ppppppplVar2 = (longlong *******)*ppppppplVar14;
        if (*(char *)(ppppppplVar14 + 1) == '\0') {
          if (ppppppplVar2 != (longlong *******)0x0) {
            uVar8 = FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(ppppppplVar14 + 1) = 0;
        }
        if ((local_48 != '\0') && (local_50 != (longlong *******)0x0)) {
          uVar8 = FUN_00d50b20();
        }
        if ((local_128 != '\0') && (local_130 != 0)) {
          uVar8 = FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          uVar8 = FUN_00d50b20();
        }
        ppppppplVar16 = local_88;
        if (ppppppplVar2 == ppppppplVar6) goto LAB_00793ddd;
        if (ppppppplVar2 != (longlong *******)0x0) {
          FUN_00d50b20();
        }
      }
    } while( true );
  }
LAB_00793e72:
  uVar8 = FUN_00c9fe20();
  ppppppplVar16 = local_88;
  uVar11 = (undefined7)((ulonglong)uVar8 >> 8);
  ppppppplVar14 = &local_80;
  if ((char)local_80 == '\0') {
    ppppppplVar14 = (longlong *******)&local_50;
  }
  local_50 = (longlong *******)CONCAT71(local_50._1_7_,(char)local_80);
  *(undefined1 *)ppppppplVar14 = 0;
  uVar19 = extraout_XMM0_Da;
  if (((char)local_80 != '\0') && (local_88 != (longlong *******)0x0)) {
    uVar19 = FUN_00d50b20();
    uVar11 = extraout_var;
  }
  if ((char)local_50 == '\0') {
    if (ppppppplVar16 != (longlong *******)0x0) {
      uVar19 = FUN_00d50b00();
      goto LAB_00793efa;
    }
  }
  else if (ppppppplVar16 != (longlong *******)0x0) {
LAB_00793efa:
    local_80._0_1_ = '\0';
    local_88 = (longlong *******)0x0;
    local_78 = ppppppplVar16;
    local_68 = 0;
    local_70 = 0;
    if (0 < *(int *)((longlong)ppppppplVar16 + 0xc)) {
      lVar9 = 0;
      do {
        ppppppplVar14 = (longlong *******)ppppppplVar16[2][lVar9];
        local_118 = '\0';
        local_120 = ppppppplVar14;
        local_88 = ppppppplVar14;
        FUN_0076f110(uVar19,&local_120);
        ppppppplVar2 = local_50;
        if (local_48 == '\0') {
          if (((local_50 != (longlong *******)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
             (local_50 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_48 = '\0';
        }
        if ((local_118 != '\0') && (local_120 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        local_50 = ppppppplVar6;
        local_48 = '\0';
        cVar7 = FUN_00d23d70();
        uVar19 = extraout_XMM0_Da_00;
        if ((local_48 != '\0') && (local_50 != (longlong *******)0x0)) {
          uVar19 = FUN_00d50b20();
        }
        if (cVar7 != '\0') {
          local_50 = ppppppplVar6;
          local_48 = '\0';
          FUN_00d23f50();
          if ((local_48 != '\0') && (local_50 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
          if (*(int *)((longlong)ppppppplVar2 + 0xc) < 2) {
            local_48 = '\0';
            local_50 = ppppppplVar14;
            FUN_00ca13a0();
            if ((local_48 != '\0') && (local_50 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
          break;
        }
        if (ppppppplVar2 != (longlong *******)0x0) {
          uVar19 = FUN_00d50b20();
        }
        lVar9 = lVar9 + 1;
        local_70 = CONCAT44(local_70._4_4_,(int)lVar9);
      } while ((int)lVar9 < *(int *)((longlong)ppppppplVar16 + 0xc));
    }
    FUN_00115190();
    uVar8 = FUN_00d50b20();
    bVar3 = true;
    uVar20 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1) & 0xffffffff;
    goto joined_r0x007948af;
  }
  uVar20 = CONCAT71(uVar11,1) & 0xffffffff;
LAB_007948bd:
  if (ppppppplVar6 != (longlong *******)0x0) {
    FUN_00d50b20();
  }
  return uVar20;
LAB_00793ddd:
  if (local_88 == (longlong *******)0x0) {
    local_a8 = 0;
    ppppppplVar16 = (longlong *******)0x0;
  }
  else {
    if ((char)local_80 == '\0') {
      uVar8 = FUN_00d50b00();
    }
    else {
      local_80._0_1_ = '\0';
    }
    local_a8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
  }
  if (ppppppplVar6 != (longlong *******)0x0) {
    FUN_00d50b20();
  }
LAB_00793e27:
  FUN_0079bb70();
  if (ppppppplVar16 == (longlong *******)0x0) goto LAB_00793e72;
  local_b0 = ppppppplVar16;
  pvVar10 = _pthread_getspecific((pthread_key_t)ppppppplVar14);
  if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    ppppppplVar14 = ppppppplVar6;
  }
  FUN_01264240();
  ppppppplVar16 = local_88;
  if ((char)local_80 == '\0') {
    if (local_88 != (longlong *******)0x0) {
      FUN_00d50b00();
      if (((char)local_80 != '\0') && (local_88 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0079405d;
    }
LAB_007940e9:
    uVar15 = CONCAT71((int7)((ulonglong)ppppppplVar14 >> 8),1);
    local_90 = (longlong *******)0x0;
    local_a0 = 0;
    uVar8 = 0;
    local_60 = (longlong *******)CONCAT44(local_60._4_4_,1);
LAB_007942da:
    local_58 = ppppppplVar16;
    ppppppplVar14 = *(longlong ********)(unaff_RDI + 0x120);
    uVar20 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1) & 0xffffffff;
    if (ppppppplVar14 == (longlong *******)0x0) {
      cVar7 = (char)local_60;
    }
    else {
      local_94 = (uint)uVar15;
      local_80._0_1_ = '\0';
      local_88 = (longlong *******)0x0;
      local_68 = 0;
      local_70 = 0;
      local_78 = ppppppplVar14;
      if (0 < *(int *)((longlong)ppppppplVar14 + 0xc)) {
        lVar9 = 0;
        do {
          local_88 = (longlong *******)ppppppplVar14[2][lVar9];
          uVar19 = FUN_00e33de0();
          lVar5 = DAT_0270b920;
          if (DAT_0270b920 != 0) {
            uVar19 = FUN_00d50b00();
          }
          local_d0 = lVar5;
          local_c8 = '\x01';
          FUN_000175c0(uVar19,&local_d0);
          ppppppplVar2 = local_50;
          FUN_0006e1c0();
          ppppppplVar16 = (longlong *******)&DAT_02802688;
          if (ppppppplVar2 != (longlong *******)0x0) {
            (*(code *)(*ppppppplVar2)[0x6c])();
            cVar7 = FUN_00e85ea0();
            ppppppplVar16 = (longlong *******)&local_50;
            if (cVar7 == '\0') {
              ppppppplVar16 = (longlong *******)&DAT_02802688;
            }
          }
          ppppppplVar2 = (longlong *******)*ppppppplVar16;
          if (*(char *)(ppppppplVar16 + 1) == '\0') {
            if (ppppppplVar2 != (longlong *******)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(undefined1 *)(ppppppplVar16 + 1) = 0;
          }
          if ((local_48 != '\0') && (local_50 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c8 != '\0') && (local_d0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          if (ppppppplVar2 == ppppppplVar6) {
            FUN_00e34b50();
          }
          if (ppppppplVar2 != (longlong *******)0x0) {
            FUN_00d50b20();
          }
          lVar9 = lVar9 + 1;
          local_70 = CONCAT44(local_70._4_4_,(int)lVar9);
        } while ((int)lVar9 < *(int *)((longlong)ppppppplVar14 + 0xc));
      }
      FUN_00097c40();
      uVar15 = (ulonglong)local_94;
      cVar7 = (char)local_60;
    }
    cVar12 = (char)uVar15;
    cVar4 = (char)local_a0;
  }
  else {
    if (local_88 == (longlong *******)0x0) goto LAB_007940e9;
LAB_0079405d:
    local_80._0_1_ = '\0';
    local_88 = ppppppplVar16;
    cVar7 = FUN_00ca18c0();
    if (((char)local_80 != '\0') && (local_88 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
    uVar15 = CONCAT71((int7)((ulonglong)ppppppplVar14 >> 8),1);
    if (cVar7 == '\0') {
      local_90 = (longlong *******)0x0;
      uVar8 = 0;
      local_a0 = 0;
LAB_00794121:
      local_60 = (longlong *******)((ulonglong)local_60._4_4_ << 0x20);
      goto LAB_007942da;
    }
    local_110 = ppppppplVar16;
    local_108 = '\0';
    FUN_0076f110(uVar15,&local_110);
    local_90 = local_88;
    ppppppplVar14 = local_88;
    if (local_88 == (longlong *******)0x0) {
      local_90 = (longlong *******)0x0;
      uVar8 = 0;
      local_a0 = 0;
    }
    else if ((char)local_80 == '\0') {
      uVar8 = FUN_00d50b00();
      uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      local_a0 = uVar8;
      if (((char)local_80 != '\0') && (local_88 != (longlong *******)0x0)) {
        uVar8 = FUN_00d50b20();
      }
    }
    else {
      local_80._0_1_ = '\0';
      uVar8 = CONCAT71((int7)((ulonglong)local_88 >> 8),1);
      local_a0 = uVar8;
    }
    if ((local_108 != '\0') && (local_110 != (longlong *******)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if (local_90 == (longlong *******)0x0) {
      uVar8 = 0;
      local_90 = (longlong *******)0x0;
      local_60 = (longlong *******)((ulonglong)local_60._4_4_ << 0x20);
      uVar15 = CONCAT71((int7)((ulonglong)ppppppplVar14 >> 8),1);
      goto LAB_007942da;
    }
    if (*(int *)((longlong)local_90 + 0xc) < 1) {
      uVar15 = 0;
      goto LAB_00794121;
    }
    FUN_00d23340();
    ppppppplVar2 = local_88;
    ppppppplVar14 = (longlong *******)&local_50;
    ppppppplVar17 = &local_80;
    if ((char)local_80 == '\0') {
      ppppppplVar17 = ppppppplVar14;
    }
    local_50 = (longlong *******)CONCAT71(local_50._1_7_,(char)local_80);
    *(undefined1 *)ppppppplVar17 = 0;
    if (((char)local_80 != '\0') && (local_88 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
    pVar13 = (pthread_key_t)ppppppplVar14;
    if (((char)local_50 == '\0') && (ppppppplVar2 != (longlong *******)0x0)) {
      FUN_00d50b00();
    }
    pvVar10 = _pthread_getspecific(pVar13);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    local_60 = local_88;
    if (((((char)local_80 == '\0') && (local_88 != (longlong *******)0x0)) &&
        (FUN_00d50b00(), (char)local_80 != '\0')) && (local_88 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
    pvVar10 = _pthread_getspecific(pVar13);
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pVar13 = (pthread_key_t)local_60;
    }
    local_f8 = '\0';
    local_100 = ppppppplVar2;
    FUN_012e6e20();
    if ((local_f8 != '\0') && (local_100 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
    pVar1 = (pthread_key_t)ppppppplVar6;
    if (ppppppplVar6 != (longlong *******)0x0) {
      pvVar10 = _pthread_getspecific(pVar13);
      if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        pVar13 = pVar1;
      }
      FUN_01266fe0();
      ppppppplVar14 = local_88;
      if (((char)local_80 != '\0') && (local_88 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      if (ppppppplVar14 != (longlong *******)0x0) {
        pvVar10 = _pthread_getspecific(pVar13);
        if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pVar13 = pVar1;
        }
        FUN_01266fe0();
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_f0 = ppppppplVar6;
        local_e8 = '\0';
        FUN_012e6e20();
        if ((local_e8 != '\0') && (local_f0 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_80 != '\0') && (local_88 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    pvVar10 = _pthread_getspecific(pVar13);
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pVar13 = pVar1;
    }
    pvVar10 = _pthread_getspecific(pVar13);
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pVar13 = (pthread_key_t)ppppppplVar2;
    }
    FUN_0125a280();
    FUN_012642b0();
    pvVar10 = _pthread_getspecific(pVar13);
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pVar13 = pVar1;
    }
    pvVar10 = _pthread_getspecific(pVar13);
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pVar13 = (pthread_key_t)ppppppplVar2;
    }
    FUN_01264170();
    FUN_01259540();
    pvVar10 = _pthread_getspecific(pVar13);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    ppppppplVar14 = local_60;
    local_e0 = ppppppplVar6;
    local_d8 = '\0';
    FUN_012e6a70();
    if ((local_d8 != '\0') && (local_e0 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
    local_80._0_1_ = '\0';
    local_88 = ppppppplVar2;
    FUN_00d23f50();
    if (((char)local_80 != '\0') && (local_88 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
    if (*(int *)((longlong)local_90 + 0xc) < 2) {
      local_80._0_1_ = '\0';
      local_88 = ppppppplVar16;
      FUN_00ca13a0();
      if (((char)local_80 != '\0') && (local_88 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
    }
    if (ppppppplVar14 != (longlong *******)0x0) {
      FUN_00d50b20();
    }
    if (ppppppplVar2 != (longlong *******)0x0) {
      FUN_00d50b20();
    }
    cVar12 = '\0';
    cVar7 = '\0';
    uVar20 = 0;
    cVar4 = (char)local_a0;
  }
  if ((cVar4 != '\0') && (cVar12 == '\0')) {
    FUN_00d50b20();
  }
  if (cVar7 == '\0') {
    FUN_00d50b20();
  }
  bVar3 = false;
joined_r0x007948af:
  if (((char)local_a8 != '\0') && (!bVar3)) {
    FUN_00d50b20();
  }
  goto LAB_007948bd;
}


