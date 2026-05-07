// Function: FUN_01c89c70
// Address: 01c89c70
// Size: 4215 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01c89cdf) */
/* WARNING: Removing unreachable block (ram,0x01c89ceb) */
/* WARNING: Removing unreachable block (ram,0x01c8a4f9) */
/* WARNING: Removing unreachable block (ram,0x01c8a505) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01c89c70(float param_1)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  void *pvVar9;
  longlong lVar10;
  pthread_key_t in_ECX;
  pthread_key_t pVar11;
  ulonglong uVar12;
  undefined8 *******pppppppuVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  longlong *unaff_RDI;
  ulonglong uVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  longlong local_1f8;
  char local_1f0;
  longlong local_1e8;
  char local_1e0;
  longlong local_1d8;
  char local_1d0;
  longlong local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  ulonglong local_168;
  ulonglong local_160;
  float local_158;
  ulonglong local_120;
  char local_118;
  ulonglong local_110;
  char local_108;
  ulonglong local_100;
  char local_f8;
  ulonglong local_f0;
  char local_e8;
  undefined8 *******local_e0;
  char local_d8;
  double local_d0;
  ulonglong local_c8;
  undefined8 *******local_c0;
  double local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 *******local_a0;
  undefined4 local_98;
  int iStack_94;
  undefined4 local_90;
  int iStack_8c;
  ulonglong local_88;
  undefined8 *******local_80;
  undefined4 local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  char local_40;
  undefined8 *******local_38;
  
  pppppppuVar13 = (undefined8 *******)unaff_RDI[0x2b];
  if (pppppppuVar13 != (undefined8 *******)0x0) {
    FUN_00d50b00();
  }
  local_38 = pppppppuVar13;
  FUN_016cbba0();
  uVar12 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  local_b0 = uVar12;
  local_58 = FUN_01c8b200(param_1);
  pvVar9 = _pthread_getspecific(in_ECX);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar2 = (double)FUN_016c98e0();
  local_70 = 0xffffffff;
  pvVar9 = _pthread_getspecific(in_ECX);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  pppppppuVar13 = (undefined8 *******)&local_78;
  FUN_016ca840(pppppppuVar13,local_58,&local_c0,&local_70);
  local_88 = local_48;
  if (((local_40 == '\0') && (local_48 != 0)) &&
     ((FUN_00d50b00(), local_40 != '\0' && (local_48 != 0)))) {
    FUN_00d50b20();
  }
  pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar13);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_48 = FUN_016d1410();
  pVar11 = (pthread_key_t)pppppppuVar13;
  if ((iStack_74 == 0) || (local_48 >> 0x20 == 0)) {
LAB_01c89e3e:
    local_a8 = CONCAT44(iStack_74,local_78);
    local_a0 = local_c0;
    local_68 = CONCAT44(local_68._4_4_,local_70);
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016ca950(&local_a0,&local_a8,&local_68);
    local_50 = local_48;
    pppppppuVar13 = (undefined8 *******)0x0;
    if (local_48 != 0) {
      uVar12 = local_48;
      if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific((pthread_key_t)uVar12);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar7 = FUN_016cb720();
      pppppppuVar13 = (undefined8 *******)CONCAT71((int7)(uVar12 >> 8),1);
      local_80 = pppppppuVar13;
      if (cVar7 != '\0') {
        pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar13);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        pppppppuVar13 = &local_a0;
        FUN_016ca950(pppppppuVar13,&local_a8,&local_68);
        uVar12 = local_48;
        if (local_48 != local_50) {
          if (local_40 != '\0') {
            local_50 = local_48;
            FUN_00d50b20();
            goto LAB_01c89ffe;
          }
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          local_50 = uVar12;
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_01c89ffe;
    }
  }
  else {
    cVar7 = FUN_00e7c000();
    pVar11 = (pthread_key_t)pppppppuVar13;
    if (cVar7 == '\0') goto LAB_01c89e3e;
    local_a8 = FUN_00e7bdb0();
  }
  local_80 = (undefined8 *******)0x0;
  local_50 = 0;
LAB_01c89ffe:
  local_a0 = local_c0;
  if ((ulonglong)local_c0 >> 0x20 != 0) {
    pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar13);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar7 = FUN_016cb720();
    if (cVar7 != '\0') {
      local_48 = CONCAT44(local_48._4_4_,local_70);
      pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar13);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      pppppppuVar13 = (undefined8 *******)0x0;
      FUN_016ca840(0,local_c0,&local_a0,&local_48);
      if ((local_1f0 != '\0') && (local_1f8 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  local_160 = CONCAT44(iStack_74,local_78);
  local_6c = local_70;
  plVar1 = (longlong *)unaff_RDI[0x28];
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  dVar3 = (double)(**(code **)(*plVar1 + 0x388))(param_1);
  FUN_00d50b20();
  local_168 = 0;
  uVar12 = 0;
  bVar5 = false;
  local_158 = param_1;
  local_d0 = dVar2;
LAB_01c8a130:
  do {
    (**(code **)(*unaff_RDI + 0x658))();
    uVar16 = local_48;
    uVar15 = local_168;
    if (local_48 == uVar12) {
      uVar16 = uVar12;
      bVar6 = bVar5;
      if ((!bVar5) && (local_48 != 0)) {
        if (local_40 != '\0') goto joined_r0x01c8a199;
        FUN_00d50b00();
        bVar6 = true;
      }
joined_r0x01c8a1e8:
      bVar5 = bVar6;
      uVar12 = uVar16;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (uVar12 == 0) goto LAB_01c8ac70;
    }
    else {
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        bVar6 = true;
        if ((bVar5) && (uVar12 != 0)) {
          FUN_00d50b20();
        }
        goto joined_r0x01c8a1e8;
      }
      if ((bVar5) && (uVar12 != 0)) {
        FUN_00d50b20();
      }
joined_r0x01c8a199:
      uVar12 = uVar16;
      if (uVar12 == 0) {
        bVar5 = true;
LAB_01c8ac70:
        local_168 = uVar15;
        FUN_01c86ba0();
        if ((bVar5) && (local_168 != 0)) {
          FUN_00d50b20();
        }
        pppppppuVar13 = local_38;
        uVar16 = local_88;
        uVar12 = local_b0;
        if (((char)local_80 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (uVar16 != 0) {
          FUN_00d50b20();
        }
        if (uVar12 != 0) {
          FUN_00d50b20();
        }
        if (pppppppuVar13 != (undefined8 *******)0x0) {
          FUN_00d50b20();
        }
        return 1;
      }
      bVar5 = true;
    }
    iVar8 = FUN_01d3a5a0();
    if ((iVar8 == 6) && (iVar8 = FUN_01d3b630(), uVar15 = uVar12, iVar8 == 1)) goto LAB_01c8ac70;
    iVar8 = FUN_01d3a5a0();
  } while (iVar8 != 5);
  FUN_01d3abf0();
  fVar18 = (float)FUN_01e466c0();
  plVar1 = (longlong *)unaff_RDI[0x28];
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_b8 = (double)(**(code **)(*plVar1 + 0x388))(fVar18);
  FUN_00d50b20();
  local_68 = FUN_01c8d230();
  if (fVar18 < local_158) {
    local_68 = FUN_00e7bfe0();
  }
  local_48 = local_58;
  FUN_00e7b820();
  local_c8 = local_48;
  pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar13);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    pppppppuVar13 = local_38;
  }
  dVar20 = (double)FUN_016c98e0();
  pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar13);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    pppppppuVar13 = local_38;
  }
  dVar4 = (double)FUN_016c98e0();
  FUN_01c86ba0();
  plVar1 = (longlong *)unaff_RDI[0x28];
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_b8 = (local_b8 - dVar3) + dVar2;
  fVar19 = (float)(**(code **)(*plVar1 + 0x390))();
  if ((*(float *)(unaff_RDI + 0x32) != fVar19) || (NAN(*(float *)(unaff_RDI + 0x32)) || NAN(fVar19))
     ) {
    *(float *)(unaff_RDI + 0x32) = fVar19;
    (**(code **)(*unaff_RDI + 0x620))();
  }
  FUN_00d50b20();
  dVar20 = (double)((ulonglong)(dVar20 - dVar4) & _DAT_023908f0) * _DAT_0241ea70;
  if (fVar18 < local_158) {
    local_158 = fVar18;
    if (local_d0 - dVar20 < local_b8) goto LAB_01c8a130;
  }
  else {
    local_158 = fVar18;
    if (local_b8 < dVar20 + local_d0) goto LAB_01c8a130;
  }
  local_48 = local_48 & 0xffffffff00000000;
  if ((local_68._4_4_ == 0) || (cVar7 = FUN_00e7c630(), cVar7 == '\0')) {
    local_48 = local_160;
    FUN_00e7b820();
    local_60 = local_48;
    pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar13);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pppppppuVar13 = local_38;
    }
    FUN_016c2ef0();
    pVar11 = (pthread_key_t)pppppppuVar13;
    if ((local_60._4_4_ == 0) || (iStack_74 == 0)) {
LAB_01c8a568:
      pvVar9 = _pthread_getspecific(pVar11);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar14 = &local_98;
      FUN_016ca840(puVar14,local_60,&local_90,&local_6c);
      uVar16 = local_48;
      pVar11 = (pthread_key_t)puVar14;
      if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60._4_4_ == 0) || (iStack_74 == 0)) {
LAB_01c8a661:
        bVar6 = false;
        if ((iStack_94 != 0) && (bVar6 = false, local_60._4_4_ != 0)) {
          cVar7 = FUN_00e7c020();
          if (cVar7 == '\0') {
            bVar6 = false;
          }
          else {
            pvVar9 = _pthread_getspecific(pVar11);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              pVar11 = (pthread_key_t)local_38;
            }
            cVar7 = FUN_016cb720();
            bVar6 = true;
            if (cVar7 != '\0') {
              pvVar9 = _pthread_getspecific(pVar11);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              puVar14 = &local_90;
              FUN_016ca950(puVar14,&local_98,&local_6c);
              pVar11 = (pthread_key_t)puVar14;
              local_58 = local_48;
              if (uVar16 == local_48) {
                local_58 = uVar16;
              }
              else {
                if (local_40 != '\0') {
                  bVar17 = uVar16 != 0;
                  uVar16 = local_48;
                  if (bVar17) {
                    FUN_00d50b20();
                    uVar16 = local_58;
                  }
                  goto LAB_01c8a9ed;
                }
                if (local_48 != 0) {
                  FUN_00d50b00();
                }
                if (uVar16 != 0) {
                  FUN_00d50b20();
                }
              }
              uVar16 = local_58;
              if ((local_40 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
                uVar16 = local_58;
              }
            }
          }
        }
LAB_01c8a9ed:
        pvVar9 = _pthread_getspecific(pVar11);
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          pVar11 = (pthread_key_t)local_38;
        }
        FUN_016f1a80();
        if (bVar6) {
          pvVar9 = _pthread_getspecific(pVar11);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_f8 = '\0';
          uVar15 = local_60;
          local_100 = uVar16;
          FUN_01701ac0(local_60,CONCAT44(iStack_94,local_98),&local_100,0);
          pVar11 = (pthread_key_t)uVar15;
          if ((local_1b0 != '\0') && (local_1b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
        }
        pvVar9 = _pthread_getspecific(pVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_f0 = local_88;
        local_e8 = '\0';
        pppppppuVar13 = local_a0;
        FUN_01701ac0(local_a0,local_60,&local_f0,1);
        if ((local_1a0 != '\0') && (local_1a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        cVar7 = FUN_00e7c020();
        if (cVar7 == '\0') {
          goto LAB_01c8a661;
        }
        if (iStack_8c != 0) {
          local_48 = CONCAT44(local_48._4_4_,local_6c);
          pvVar9 = _pthread_getspecific(pVar11);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pVar11 = (pthread_key_t)local_38;
          }
          cVar7 = FUN_016cb720();
          if (cVar7 != '\0') {
            pvVar9 = _pthread_getspecific(pVar11);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            pVar11 = 0;
            FUN_016ca840(0,CONCAT44(iStack_8c,local_90),&local_90,&local_48);
            if ((local_1e0 != '\0') && (local_1e8 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        pvVar9 = _pthread_getspecific(pVar11);
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          pVar11 = (pthread_key_t)local_38;
        }
        FUN_016f1a80();
        pvVar9 = _pthread_getspecific(pVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_120 = local_50;
        local_118 = '\0';
        uVar15 = local_60;
        FUN_01701ac0(local_60,local_a8,&local_120,0);
        pVar11 = (pthread_key_t)uVar15;
        if ((local_1d0 != '\0') && (local_1d8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_118 != '\0') && (local_120 != 0)) {
          FUN_00d50b20();
        }
        pvVar9 = _pthread_getspecific(pVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        pppppppuVar13 = (undefined8 *******)CONCAT44(iStack_8c,local_90);
        local_110 = local_88;
        local_108 = '\0';
        FUN_01701ac0(pppppppuVar13,local_60,&local_110,1);
        if ((local_1c0 != '\0') && (local_1c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_108 != '\0') && (local_110 != 0)) {
          FUN_00d50b20();
        }
      }
      if (uVar16 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      cVar7 = FUN_00e7c000();
      pVar11 = (pthread_key_t)pppppppuVar13;
      if (cVar7 == '\0') goto LAB_01c8a568;
      pvVar9 = _pthread_getspecific(pVar11);
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        pppppppuVar13 = local_38;
      }
      FUN_016f1a80();
    }
    if (unaff_RDI[0x35] != 0) {
      FUN_01c4e030();
    }
    local_e0 = local_38;
    local_d8 = '\0';
    FUN_01c453b0();
    if ((local_d8 != '\0') && (local_e0 != (undefined8 *******)0x0)) {
      FUN_00d50b20();
    }
    local_160 = local_60;
    pvVar9 = _pthread_getspecific((pthread_key_t)pppppppuVar13);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pppppppuVar13 = local_38;
    }
    local_d0 = (double)FUN_016c98e0();
    local_58 = local_c8;
  }
  FUN_01c86ba0();
  local_158 = fVar18;
  goto LAB_01c8a130;
}


