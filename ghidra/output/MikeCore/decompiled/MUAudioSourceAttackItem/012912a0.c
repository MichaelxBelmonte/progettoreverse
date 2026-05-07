// Function: FUN_012912a0
// Address: 012912a0
// Size: 7923 bytes
// Class: MUAudioSourceAttackItem


/* WARNING: Type propagation algorithm not settling */

double ***** FUN_012912a0(double *******param_1,longlong *param_2,double *param_3,void *param_4)

{
  bool bVar1;
  double dVar2;
  double *******pppppppdVar3;
  double *******pppppppdVar4;
  double *******pppppppdVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  void *pvVar10;
  double *******pppppppdVar11;
  double *******pppppppdVar12;
  longlong lVar13;
  double *******pppppppdVar14;
  double *******pppppppdVar15;
  undefined7 uVar16;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  int iVar17;
  pthread_key_t pVar18;
  double ******ppppppdVar19;
  double *******pppppppdVar20;
  char unaff_SIL;
  int iVar21;
  longlong *unaff_RDI;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  ulonglong uVar26;
  bool bVar27;
  float fVar28;
  double dVar29;
  double *****pppppdVar30;
  double dVar31;
  undefined8 uVar32;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  int *in_stack_fffffffffffffeb8;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  double *****local_e0;
  double *******local_d8;
  double ******local_b0;
  char local_a8;
  double local_a0;
  double *******local_98;
  double *******local_90;
  double *******local_88;
  double *******local_78;
  char local_70;
  double *******local_68;
  double ******local_60;
  double *******local_58;
  undefined8 local_50;
  int local_48;
  double *******local_40;
  double *******local_38;
  
  local_90 = (double *******)param_3;
  local_38 = param_1;
  FUN_00c8e690();
  pppppppdVar3 = local_68;
  if (((char)local_60 == '\0') && (local_68 != (double *******)0x0)) {
    FUN_00d50b00();
    if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  pppppppdVar4 = local_68;
  if (((char)local_60 == '\0') && (local_68 != (double *******)0x0)) {
    FUN_00d50b00();
    if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  pppppppdVar5 = local_68;
  if (((char)local_60 == '\0') && (local_68 != (double *******)0x0)) {
    FUN_00d50b00();
    if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_004f2260(0);
  pppppppdVar12 = local_68;
  pppppppdVar20 = (double *******)*unaff_RDI;
  if (pppppppdVar20 == local_68) {
    if (((char)unaff_RDI[1] != '\0') || (local_68 == (double *******)0x0)) goto LAB_012914cd;
    if ((char)local_60 == '\0') {
      FUN_00d50b00();
      goto LAB_012914c4;
    }
LAB_01291489:
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    lVar9 = unaff_RDI[1];
    if ((char)local_60 != '\0') {
      *unaff_RDI = (longlong)local_68;
      if (((char)lVar9 != '\0') && (pppppppdVar20 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01291489;
    }
    if (local_68 != (double *******)0x0) {
      FUN_00d50b00();
    }
    *unaff_RDI = (longlong)pppppppdVar12;
    if (((char)lVar9 != '\0') && (pppppppdVar20 != (double *******)0x0)) {
      FUN_00d50b20();
    }
LAB_012914c4:
    *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_012914cd:
    if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((double *******)*unaff_RDI != (double *******)0x0) {
    local_60 = (double ******)((ulonglong)local_60 & 0xffffffffffffff00);
    local_68 = (double *******)0x0;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    local_58 = (double *******)*unaff_RDI;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if ((int)local_50._4_4_ < 1) {
          iVar21 = -local_50._4_4_;
        }
        else {
          iVar21 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar21);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar21 = 0;
        }
        local_50 = CONCAT44(iVar21,(int)local_50);
      }
      lVar9 = (longlong)(int)local_50;
      iVar21 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar21);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar21) break;
      ppppppdVar19 = local_58[2];
      local_68 = (double *******)ppppppdVar19[lVar9 + 1];
      pvVar10 = _pthread_getspecific((pthread_key_t)ppppppdVar19);
      pVar18 = (pthread_key_t)ppppppdVar19;
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      pppppppdVar20 = local_78;
      if ((local_70 != '\0') && (local_78 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      pppppppdVar12 = local_68;
      if (pppppppdVar20 != (double *******)0x0) {
        pvVar10 = _pthread_getspecific(pVar18);
        pppppppdVar20 = local_68;
        if ((pvVar10 != (void *)0x0) &&
           (lVar9 = FUN_00e8b990(), pppppppdVar12 = pppppppdVar20, lVar9 != 0)) {
          pppppppdVar12 =
               (double *******)pppppppdVar20[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
        }
        local_98 = (double *******)((double)pppppppdVar12[0x1d] + (double)pppppppdVar12[0x17]);
        pvVar10 = _pthread_getspecific(pVar18);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        pvVar10 = _pthread_getspecific(pVar18);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar29 = (double)FUN_013de8d0();
        pvVar10 = _pthread_getspecific(pVar18);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar10 = _pthread_getspecific(pVar18);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        pvVar10 = _pthread_getspecific(pVar18);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013def20();
        local_40 = (double *******)FUN_0128e2f0();
        if ((local_a8 != '\0') && (CONCAT71(local_b0._1_7_,(char)local_b0) != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        pppppppdVar20 = local_68;
        pppppdVar30 = (double *****)((double)local_98 - (dVar29 + (double)local_40));
        local_98 = (double *******)pppppdVar30;
        if (unaff_SIL != '\0') {
          pvVar10 = _pthread_getspecific(pVar18);
          pppppppdVar12 = local_68;
          if ((pvVar10 != (void *)0x0) &&
             (lVar9 = FUN_00e8b990(), pppppppdVar20 = pppppppdVar12, lVar9 != 0)) {
            pppppppdVar20 =
                 (double *******)pppppppdVar12[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          }
          pppppdVar30 = (double *****)((double)local_98 - (double)pppppppdVar20[0x36]);
        }
        pppppppdVar20 = local_68;
        lVar9 = (longlong)local_48 + (longlong)(int)local_50;
        pppppppdVar3[2][lVar9] = pppppdVar30;
        pvVar10 = _pthread_getspecific((pthread_key_t)lVar9);
        pppppppdVar12 = local_68;
        pVar18 = (pthread_key_t)lVar9;
        if ((pvVar10 != (void *)0x0) &&
           (lVar9 = FUN_00e8b990(), pppppppdVar20 = pppppppdVar12, lVar9 != 0)) {
          pppppppdVar20 =
               (double *******)pppppppdVar12[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
        }
        local_98 = (double *******)pppppppdVar20[0x1e];
        pvVar10 = _pthread_getspecific(pVar18);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        pvVar10 = _pthread_getspecific(pVar18);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar29 = (double)FUN_013de9b0();
        pppppppdVar4[2][(longlong)local_48 + (longlong)(int)local_50] =
             (double *****)((double)local_98 / dVar29);
        if ((local_70 != '\0') && (local_78 != (double *******)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_001159b0();
  }
  if (*(int *)(pppppppdVar3 + 3) + 7U < 0xf) {
    if (local_90 != (double *******)0x0) {
      *local_90 = (double ******)0x3ff0000000000000;
    }
    local_e0 = (double *****)0x0;
    if (local_38 != (double *******)0x0) {
      *local_38 = (double ******)0x0;
    }
    goto LAB_012931b6;
  }
  local_78 = pppppppdVar3;
  local_70 = '\0';
  FUN_00c8e4f0();
  pppppppdVar20 = local_68;
  if ((char)local_60 == '\0') {
    if (local_68 != (double *******)0x0) {
      FUN_00d50b00();
      if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_60 = (double ******)((ulonglong)local_60 & 0xffffffffffffff00);
  }
  if ((local_70 != '\0') && (local_78 != (double *******)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_68 = (double *******)0x0;
  local_60 = (double ******)FUN_00e8b590;
  _qsort_r(&local_68,8,0x1708ec0,param_4,in_stack_fffffffffffffeb8);
  iVar21 = *(int *)(pppppppdVar20 + 3);
  iVar17 = iVar21 + 0xf;
  if (-1 < iVar21) {
    iVar17 = iVar21;
  }
  iVar21 = *(int *)(pppppppdVar3 + 3);
  iVar6 = iVar21 + 7;
  if (-1 < iVar21) {
    iVar6 = iVar21;
  }
  local_e0 = pppppppdVar20[2][iVar17 >> 4];
  local_d8 = (double *******)0x0;
  lVar9 = 0;
  do {
    if (iVar6 >> 3 <= (int)lVar9) goto LAB_01291a81;
    ppppppdVar19 = pppppppdVar3[2] + lVar9;
    lVar9 = lVar9 + 1;
  } while (((double)*ppppppdVar19 != (double)local_e0) ||
          (NAN((double)*ppppppdVar19) || NAN((double)local_e0)));
  local_d8 = *(double ********)(*(longlong *)(*unaff_RDI + 0x10) + -8 + lVar9 * 8);
LAB_01291a81:
  dVar29 = 0.0;
  if (pppppppdVar4 != (double *******)0x0) {
    iVar21 = *(int *)(pppppppdVar4 + 3);
    iVar17 = iVar21 + 7;
    if (-1 < iVar21) {
      iVar17 = iVar21;
    }
    if (7 < iVar21) {
      uVar7 = iVar17 >> 3;
      ppppppdVar19 = pppppppdVar4[2];
      if (uVar7 - 1 < 7) {
        dVar29 = 0.0;
        uVar26 = 0;
      }
      else {
        dVar29 = 0.0;
        uVar26 = 0;
        do {
          dVar29 = dVar29 + (double)ppppppdVar19[uVar26] + (double)ppppppdVar19[uVar26 + 1] +
                   (double)ppppppdVar19[uVar26 + 2] + (double)ppppppdVar19[uVar26 + 3] +
                   (double)ppppppdVar19[uVar26 + 4] + (double)ppppppdVar19[uVar26 + 5] +
                   (double)ppppppdVar19[uVar26 + 6] + (double)ppppppdVar19[uVar26 + 7];
          uVar26 = uVar26 + 8;
        } while ((uVar7 & 0xfffffff8) != (uint)uVar26);
      }
      if ((uVar7 & 7) != 0) {
        lVar9 = 0;
        do {
          dVar29 = dVar29 + (double)ppppppdVar19[(uVar26 & 0xffffffff) + lVar9];
          lVar9 = lVar9 + 1;
        } while ((uVar7 & 7) != (uint)lVar9);
      }
    }
  }
  uVar7 = *(uint *)(pppppppdVar4 + 3);
  dVar2 = DAT_0238fee8;
  if (0xe < uVar7 + 7) {
    uVar8 = uVar7 + 7;
    if (-1 < (int)uVar7) {
      uVar8 = uVar7;
    }
    dVar2 = dVar29 / (double)((int)uVar8 >> 3);
  }
  if (local_90 != (double *******)0x0) {
    *local_90 = (double ******)dVar2;
  }
  pppppppdVar12 = local_38;
  if (local_38 != (double *******)0x0) {
    pvVar10 = _pthread_getspecific((pthread_key_t)local_38);
    pppppppdVar11 = local_d8;
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pppppppdVar11 = (double *******)local_d8[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    }
    *local_38 = (double ******)((double)pppppppdVar11[0x1d] + (double)pppppppdVar11[0x17]);
  }
  pVar18 = (pthread_key_t)pppppppdVar12;
  if (param_2 != (longlong *)0x0) {
    pvVar10 = _pthread_getspecific(pVar18);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar10 = _pthread_getspecific(pVar18);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    pppppppdVar12 = (double *******)0x0;
    FUN_004f2260(0,FUN_012730d0);
    local_98 = local_68;
    if ((char)local_60 == '\0') {
      if (local_68 != (double *******)0x0) {
        FUN_00d50b00();
        if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_60 = (double ******)((ulonglong)local_60 & 0xffffffffffffff00);
    }
    if ((local_70 != '\0') && (local_78 != (double *******)0x0)) {
      FUN_00d50b20();
    }
    if (local_98 != (double *******)0x0) {
      local_60 = (double ******)((ulonglong)local_60 & 0xffffffffffffff00);
      local_68 = (double *******)0x0;
      local_58 = local_98;
      local_50 = 0xffffffff;
      local_48 = 0;
      uVar7 = 0;
      while( true ) {
        if (uVar7 != 0) {
          if ((int)uVar7 < 1) {
            iVar21 = -uVar7;
          }
          else {
            local_50 = CONCAT44(local_50._4_4_,(int)local_50 - uVar7);
            FUN_00d23690(uVar7,uVar7);
            local_48 = local_48 + local_50._4_4_;
            iVar21 = 0;
          }
          local_50 = CONCAT44(iVar21,(int)local_50);
        }
        lVar9 = (longlong)(int)local_50;
        iVar21 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar21);
        if (*(int *)((longlong)local_58 + 0xc) <= iVar21) break;
        ppppppdVar19 = local_58[2];
        pppppppdVar12 = (double *******)ppppppdVar19[lVar9 + 1];
        local_68 = pppppppdVar12;
        pvVar10 = _pthread_getspecific((pthread_key_t)ppppppdVar19);
        pppppppdVar11 = local_68;
        pVar18 = (pthread_key_t)ppppppdVar19;
        if ((pvVar10 != (void *)0x0) &&
           (lVar9 = FUN_00e8b990(), pppppppdVar12 = pppppppdVar11, lVar9 != 0)) {
          pppppppdVar12 =
               (double *******)pppppppdVar11[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
        }
        if (pppppppdVar12[0x1b] == (double ******)0x0) {
          local_70 = '\0';
          local_78 = (double *******)0x0;
        }
        else {
          pvVar10 = _pthread_getspecific(pVar18);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef490();
        }
        pvVar10 = _pthread_getspecific(pVar18);
        if ((pvVar10 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
          if (local_d8[0x1b] == (double ******)0x0) goto LAB_01291e41;
LAB_01291e6f:
          pvVar10 = _pthread_getspecific(pVar18);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef490();
          bVar27 = local_78 == (double *******)CONCAT71(local_b0._1_7_,(char)local_b0);
          if ((local_a8 != '\0') &&
             ((double *******)CONCAT71(local_b0._1_7_,(char)local_b0) != (double *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_d8[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4][0x1b] != (double *****)0x0)
          goto LAB_01291e6f;
LAB_01291e41:
          bVar27 = local_78 == (double *******)0x0;
        }
        if ((local_70 != '\0') && (local_78 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        uVar7 = local_50._4_4_;
        if (!bVar27) {
          uVar7 = ~local_50._4_4_;
          local_50 = CONCAT44(uVar7,(int)local_50);
        }
      }
      pppppppdVar12 = local_58;
      FUN_001159b0();
    }
    pppppppdVar11 = (double *******)FUN_000bea40();
    (*(code *)(*pppppppdVar11)[3])();
    local_60 = (double ******)((ulonglong)local_60 & 0xffffffffffffff00);
    local_68 = local_d8;
    local_38 = pppppppdVar11;
    iVar21 = FUN_00d237a0();
    if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
      FUN_00d50b20();
    }
    pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar12);
    pppppppdVar11 = local_d8;
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pppppppdVar11 = (double *******)local_d8[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    }
    local_90 = (double *******)((double)pppppppdVar11[0x1d] + (double)pppppppdVar11[0x17]);
    pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar12);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar12);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a0 = (double)FUN_013df0a0();
    if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
      FUN_00d50b20();
    }
    pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar12);
    pppppppdVar11 = local_38;
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), pppppppdVar11 = local_38, lVar9 != 0))
    {
      pppppppdVar12 = local_38;
      pppppppdVar11 = (double *******)local_38[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    }
    (*(code *)(*pppppppdVar11)[0x82])(local_90,local_a0);
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    uVar26 = (ulonglong)(iVar21 - 1);
    local_88 = local_d8;
    do {
      pVar18 = (pthread_key_t)pppppppdVar12;
      if ((int)uVar26 < 1) break;
      pppppppdVar11 = (double *******)local_98[2][uVar26];
      pvVar10 = _pthread_getspecific(pVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      pppppppdVar15 = local_68;
      local_78 = (double *******)CONCAT71(local_78._1_7_,(char)local_60);
      pppppppdVar12 = (double *******)&local_78;
      pppppppdVar14 = &local_60;
      if ((char)local_60 == '\0') {
        pppppppdVar14 = pppppppdVar12;
      }
      *(undefined1 *)pppppppdVar14 = 0;
      if (((char)local_60 != '\0') && (pppppppdVar15 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      if (pppppppdVar15 == (double *******)0x0) {
LAB_01292340:
        bVar1 = true;
        bVar27 = true;
      }
      else {
        pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar12);
        pppppppdVar14 = pppppppdVar11;
        if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pppppppdVar14 =
               (double *******)pppppppdVar11[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
        }
        local_40 = (double *******)((double)pppppppdVar14[0x1d] + (double)pppppppdVar14[0x17]);
        pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar12);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar29 = (double)FUN_013df0a0();
        if (((((double)local_40 < (double)local_90) && (dVar29 < local_a0)) &&
            (dVar31 = ((double)local_40 - (double)local_90) / (dVar29 - local_a0),
            DAT_024119b8 <= dVar31)) && (dVar31 <= DAT_023b3bc0)) {
          pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar12);
          pppppppdVar14 = local_38;
          if ((pvVar10 != (void *)0x0) &&
             (lVar9 = FUN_00e8b990(), pppppppdVar14 = local_38, lVar9 != 0)) {
            pppppppdVar12 = local_38;
            pppppppdVar14 = (double *******)local_38[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          }
          (*(code *)(*pppppppdVar14)[0x82])(local_40,dVar29);
          if ((local_150 == '\0') || (local_158 == 0)) {
            local_90 = local_40;
            local_a0 = dVar29;
            local_88 = pppppppdVar11;
          }
          else {
            FUN_00d50b20();
            local_90 = local_40;
            local_a0 = dVar29;
            local_88 = pppppppdVar11;
          }
        }
        pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar12);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar29 = (double)FUN_013de8d0();
        if ((dVar29 != DAT_02390448) || (NAN(dVar29) || NAN(DAT_02390448))) goto LAB_01292340;
        bVar1 = false;
        bVar27 = false;
      }
      if (((char)local_78 != '\0') && (bVar27 = bVar1, pppppppdVar15 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      pVar18 = (pthread_key_t)pppppppdVar12;
      uVar26 = uVar26 - 1;
    } while (bVar27);
    pvVar10 = _pthread_getspecific(pVar18);
    pppppppdVar12 = local_d8;
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pppppppdVar12 = (double *******)local_d8[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    }
    local_90 = (double *******)((double)pppppppdVar12[0x1d] + (double)pppppppdVar12[0x17]);
    pvVar10 = _pthread_getspecific(pVar18);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    pvVar10 = _pthread_getspecific(pVar18);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a0 = (double)FUN_013df0a0();
    if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
      FUN_00d50b20();
    }
    lVar9 = (longlong)(iVar21 + 1);
    do {
      pppppppdVar12 = local_98;
      if (*(int *)((longlong)local_98 + 0xc) <= lVar9) break;
      pppppppdVar11 = (double *******)local_98[2][lVar9];
      pvVar10 = _pthread_getspecific((pthread_key_t)local_98);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      pppppppdVar15 = local_68;
      local_b0._0_1_ = (char)local_60;
      pppppppdVar12 = &local_b0;
      pppppppdVar14 = &local_60;
      if ((char)local_60 == '\0') {
        pppppppdVar14 = pppppppdVar12;
      }
      *(undefined1 *)pppppppdVar14 = 0;
      if (((char)local_60 != '\0') && (pppppppdVar15 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      if (pppppppdVar15 == (double *******)0x0) {
LAB_012927e0:
        bVar1 = true;
        bVar27 = true;
      }
      else {
        pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar12);
        pppppppdVar14 = pppppppdVar11;
        if ((pvVar10 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pppppppdVar14 =
               (double *******)pppppppdVar11[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
        }
        local_40 = (double *******)((double)pppppppdVar14[0x1d] + (double)pppppppdVar14[0x17]);
        pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar12);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar29 = (double)FUN_013df0a0();
        if (((((double)local_90 < (double)local_40) && (local_a0 < dVar29)) &&
            (dVar31 = ((double)local_40 - (double)local_90) / (dVar29 - local_a0),
            DAT_024119b8 <= dVar31)) && (dVar31 <= DAT_023b3bc0)) {
          pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar12);
          pppppppdVar14 = local_38;
          if ((pvVar10 != (void *)0x0) &&
             (lVar13 = FUN_00e8b990(), pppppppdVar14 = local_38, lVar13 != 0)) {
            pppppppdVar12 = local_38;
            pppppppdVar14 = (double *******)local_38[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4]
            ;
          }
          (*(code *)(*pppppppdVar14)[0x82])(local_40,dVar29);
          local_d8 = pppppppdVar11;
          if ((local_140 == '\0') || (in_stack_fffffffffffffeb8 == (int *)0x0)) {
            local_90 = local_40;
            local_a0 = dVar29;
          }
          else {
            FUN_00d50b20();
            local_90 = local_40;
            local_a0 = dVar29;
          }
        }
        pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar12);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = (double *******)FUN_013dea30();
        pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar12);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013df480();
        pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar12);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        pppppppdVar11 = local_68;
        pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar12);
        pppppppdVar14 = local_68;
        if ((pvVar10 != (void *)0x0) &&
           (lVar13 = FUN_00e8b990(), pppppppdVar11 = pppppppdVar14, lVar13 != 0)) {
          pppppppdVar11 =
               (double *******)pppppppdVar14[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
        }
        dVar29 = (double)(*(code *)(*pppppppdVar11)[0x73])();
        if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        if (((double)local_40 != dVar29) || (NAN((double)local_40) || NAN(dVar29)))
        goto LAB_012927e0;
        bVar1 = false;
        bVar27 = false;
      }
      if (((char)local_b0 != '\0') && (bVar27 = bVar1, pppppppdVar15 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      lVar9 = lVar9 + 1;
    } while (bVar27);
    pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar12);
    pppppppdVar11 = local_88;
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), pppppppdVar11 = local_88, lVar9 != 0))
    {
      pppppppdVar11 = (double *******)local_88[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      pppppppdVar12 = local_88;
    }
    local_40 = (double *******)pppppppdVar11[0x1d];
    pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar12);
    if ((pvVar10 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
      if ((double)local_40 < (double)local_88[0x1d] + (double)local_88[0x17]) goto LAB_012928b6;
    }
    else {
      pppppppdVar12 = local_88;
      if ((double)local_40 <
          (double)local_88[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4][0x1d] +
          (double)local_88[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4][0x17]) {
LAB_012928b6:
        pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar12);
        pppppppdVar11 = local_38;
        if ((pvVar10 != (void *)0x0) &&
           (lVar9 = FUN_00e8b990(), pppppppdVar11 = local_38, lVar9 != 0)) {
          pppppppdVar12 = local_38;
          pppppppdVar11 = (double *******)local_38[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
        }
        pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar12);
        pppppppdVar15 = local_88;
        if ((pvVar10 != (void *)0x0) &&
           (lVar9 = FUN_00e8b990(), pppppppdVar15 = local_88, lVar9 != 0)) {
          pppppppdVar15 = (double *******)local_88[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          pppppppdVar12 = local_88;
        }
        local_40 = (double *******)pppppppdVar15[0x1d];
        pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar12);
        if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pppppppdVar12 = (double *******)local_88[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          local_88 = pppppppdVar12;
        }
        FUN_0125e7c0();
        pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar12);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar32 = FUN_013de8d0();
        (*(code *)(*pppppppdVar11)[0x82])(local_40,uVar32);
        if ((local_130 != '\0') && (local_138 != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar12);
    pppppppdVar11 = local_d8;
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pppppppdVar11 = (double *******)local_d8[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    }
    local_40 = (double *******)((double)pppppppdVar11[0x1d] + (double)pppppppdVar11[0x1e]);
    pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar12);
    pppppppdVar11 = local_d8;
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pppppppdVar11 = (double *******)local_d8[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    }
    pVar18 = (pthread_key_t)pppppppdVar12;
    if ((double)pppppppdVar11[0x1d] + (double)pppppppdVar11[0x17] < (double)local_40) {
      pvVar10 = _pthread_getspecific(pVar18);
      pppppppdVar11 = local_38;
      if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), pppppppdVar11 = local_38, lVar9 != 0)
         ) {
        pppppppdVar12 = local_38;
        pppppppdVar11 = (double *******)local_38[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      }
      pVar18 = (pthread_key_t)pppppppdVar12;
      pvVar10 = _pthread_getspecific(pVar18);
      if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        local_d8 = (double *******)local_d8[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      }
      local_40 = (double *******)((double)local_d8[0x1d] + (double)local_d8[0x1e]);
      pvVar10 = _pthread_getspecific(pVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      pvVar10 = _pthread_getspecific(pVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar32 = FUN_013dea30();
      (*(code *)(*pppppppdVar11)[0x82])(local_40,uVar32);
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
        FUN_00d50b20();
      }
    }
    pvVar10 = _pthread_getspecific(pVar18);
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pVar18 = (pthread_key_t)local_38;
    }
    FUN_013f2b00();
    iVar21 = *(int *)((longlong)local_68 + 0xc);
    if ((char)local_60 != '\0') {
      FUN_00d50b20();
    }
    if (iVar21 != 0) {
      if ((((dVar2 != 0.0) || (fVar28 = DAT_02390124, NAN(dVar2))) &&
          (fVar28 = DAT_02394298, dVar2 <= DAT_023b3bc0)) &&
         (fVar28 = DAT_024229e8, DAT_024119b8 <= dVar2)) {
        fVar28 = (float)dVar2;
      }
      pvVar10 = _pthread_getspecific(pVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013f2b00();
      FUN_00d23310();
      pppppppdVar11 = local_68;
      local_b0._0_1_ = (char)local_60;
      pppppppdVar12 = &local_b0;
      pppppppdVar15 = &local_60;
      if ((char)local_60 == '\0') {
        pppppppdVar15 = pppppppdVar12;
      }
      *(undefined1 *)pppppppdVar15 = 0;
      if (((char)local_60 != '\0') && (pppppppdVar11 != (double *******)0x0)) {
        pppppppdVar15 = (double *******)FUN_00d50b20();
      }
      if (pppppppdVar11 == (double *******)0x0) {
        bVar24 = 0;
        bVar25 = 0;
        bVar22 = 1;
        bVar23 = 1;
        local_40 = (double *******)0x0;
        pppppppdVar11 = (double *******)0x0;
      }
      else if ((char)local_b0 == '\0') {
        uVar32 = FUN_00d50b00();
        bVar24 = 1;
        bVar25 = 1;
        bVar22 = 0;
        bVar23 = 0;
        local_40 = (double *******)CONCAT71((int7)((ulonglong)uVar32 >> 8),1);
      }
      else {
        bVar22 = 0;
        bVar23 = 0;
        bVar24 = 1;
        bVar25 = 1;
        local_40 = (double *******)CONCAT71((int7)((ulonglong)pppppppdVar15 >> 8),1);
      }
      if ((local_70 != '\0') && (bVar25 = bVar24, bVar23 = bVar22, local_78 != (double *******)0x0))
      {
        FUN_00d50b20();
      }
      pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar12);
      pppppppdVar15 = local_38;
      if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), pppppppdVar15 = local_38, lVar9 != 0)
         ) {
        pppppppdVar12 = local_38;
        pppppppdVar15 = (double *******)local_38[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      }
      pVar18 = (pthread_key_t)pppppppdVar12;
      pvVar10 = _pthread_getspecific(pVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_90 = (double *******)FUN_013faed0();
      pvVar10 = _pthread_getspecific(pVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar29 = (double)FUN_013faf20();
      (*(code *)(*pppppppdVar15)[0x82])((double)local_90 - (double)fVar28,dVar29 + DAT_023b19a0);
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      pvVar10 = _pthread_getspecific(pVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013f2b00();
      uVar32 = FUN_00d23340();
      pppppppdVar12 = local_68;
      uVar16 = (undefined7)((ulonglong)uVar32 >> 8);
      pppppppdVar15 = &local_60;
      if ((char)local_60 == '\0') {
        pppppppdVar15 = &local_b0;
      }
      local_b0._0_1_ = (char)local_60;
      *(undefined1 *)pppppppdVar15 = 0;
      if (((char)local_60 != '\0') && (pppppppdVar12 != (double *******)0x0)) {
        FUN_00d50b20();
        uVar16 = extraout_var;
      }
      if (pppppppdVar12 == pppppppdVar11) {
        pppppppdVar14 = pppppppdVar11;
        if ((bool)(bVar23 & pppppppdVar12 != (double *******)0x0)) {
          pppppppdVar15 = (double *******)CONCAT71((int7)((ulonglong)pppppppdVar15 >> 8),1);
          local_40 = pppppppdVar15;
          if ((char)local_b0 == '\0') {
            FUN_00d50b00();
          }
        }
        else if (((char)local_b0 != '\0') && (pppppppdVar12 != (double *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        pppppppdVar14 = pppppppdVar12;
        if ((char)local_b0 == '\0') {
          if (pppppppdVar12 != (double *******)0x0) {
            FUN_00d50b00();
            uVar16 = extraout_var_00;
          }
          if ((bool)(bVar25 & pppppppdVar11 != (double *******)0x0)) {
            uVar32 = FUN_00d50b20();
            local_40 = (double *******)CONCAT71((int7)((ulonglong)uVar32 >> 8),1);
          }
          else {
            local_40 = (double *******)CONCAT71(uVar16,1);
          }
        }
        else {
          local_40 = (double *******)CONCAT71(uVar16,1);
          if ((bool)(bVar25 & pppppppdVar11 != (double *******)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((local_70 != '\0') && (local_78 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      pvVar10 = _pthread_getspecific((pthread_key_t)pppppppdVar15);
      pppppppdVar12 = local_38;
      if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), pppppppdVar12 = local_38, lVar9 != 0)
         ) {
        pppppppdVar15 = local_38;
        pppppppdVar12 = (double *******)local_38[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      }
      pVar18 = (pthread_key_t)pppppppdVar15;
      pvVar10 = _pthread_getspecific(pVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_90 = (double *******)FUN_013faed0();
      pvVar10 = _pthread_getspecific(pVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar29 = (double)FUN_013faf20();
      (*(code *)(*pppppppdVar12)[0x82])((double)local_90 + (double)fVar28,dVar29 + DAT_0238fee8);
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_40 != '\0') && (pppppppdVar14 != (double *******)0x0)) {
        FUN_00d50b20();
      }
    }
    pppppppdVar12 = local_38;
    pvVar10 = _pthread_getspecific(pVar18);
    pppppppdVar11 = pppppppdVar12;
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pppppppdVar11 = (double *******)pppppppdVar12[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    }
    (*(code *)(*pppppppdVar11)[0x6f])();
    pppppppdVar11 = local_68;
    if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
      FUN_00d50b20();
    }
    if (pppppppdVar11 == (double *******)0x0) {
      if (*param_2 != 0) {
        *param_2 = 0;
        if ((char)param_2[1] != '\0') {
          FUN_00d50b20();
        }
        *(undefined1 *)(param_2 + 1) = 0;
        pppppppdVar12 = local_38;
      }
LAB_0129318c:
      if (pppppppdVar12 != (double *******)0x0) goto LAB_01293191;
    }
    else {
      pppppppdVar11 = (double *******)*param_2;
      lVar9 = param_2[1];
      if (pppppppdVar11 != pppppppdVar12) {
        if (pppppppdVar12 != (double *******)0x0) {
          FUN_00d50b00();
        }
        *param_2 = (longlong)local_38;
        if (((char)lVar9 != '\0') && (pppppppdVar11 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        *(undefined1 *)(param_2 + 1) = 1;
        pppppppdVar12 = local_38;
        goto LAB_0129318c;
      }
      if (((char)lVar9 != '\0') || (pppppppdVar12 == (double *******)0x0)) goto LAB_0129318c;
      FUN_00d50b00();
      *(undefined1 *)(param_2 + 1) = 1;
LAB_01293191:
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (pppppppdVar20 != (double *******)0x0) {
    FUN_00d50b20();
  }
LAB_012931b6:
  if (pppppppdVar5 != (double *******)0x0) {
    FUN_00d50b20();
  }
  if (pppppppdVar4 != (double *******)0x0) {
    FUN_00d50b20();
  }
  if (pppppppdVar3 != (double *******)0x0) {
    FUN_00d50b20();
  }
  return local_e0;
}


