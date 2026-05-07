// Function: FUN_0130b770
// Address: 0130b770
// Size: 10333 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0130b770(double param_1,double param_2)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint64_t *puVar8;
  void*puVar9;
  void *pvVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint64_t *puVar14;
  undefined7 uVar15;
  undefined7 extraout_var;
  int extraout_var_00;
  void* pVar16;
  uint uVar17;
  uint64_t *in_RCX;
  uint64_t uVar18;
  int64_t *this_ptr;
  int64_t *plVar19;
  uint64_t uVar20;
  uint64_t *puVar21;
  undefined7 uVar22;
  bool bVar23;
  bool bVar24;
  double dVar25;
  uint64_t extraout_XMM0_Qa;
  double dVar26;
  uint64_t extraout_XMM0_Qb;
  uint64_t local_1a8;
  char local_1a0;
  int64_t local_158;
  char local_150;
  uint64_t local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  uint64_t *local_e8;
  uint64_t local_e0;
  int local_d4;
  uint64_t *local_d0;
  double local_c8;
  uint64_t uStack_c0;
  double local_b8;
  uint64_t *local_b0;
  uint64_t *local_a8;
  uint64_t local_a0;
  char local_98 [8];
  uint64_t *local_90;
  char local_88 [8];
  uint64_t *local_80;
  uint64_t *local_78;
  uint64_t *local_60;
  char local_58;
  uint64_t *local_50;
  uint64_t local_48;
  int local_40;
  
  local_a8 = (uint64_t *)this_ptr[0x1e];
  local_b8 = param_2;
  if (this_ptr[0x23] != 0) {
    bVar24 = false;
    local_78 = (uint64_t *)0x0;
    do {
      FUN_00b713c0();
      puVar8 = local_60;
      if (local_58 == '\0') {
        if (local_60 == (uint64_t *)0x0) goto LAB_0130c2df;
        FUN_00d50b00();
        if ((local_58 != '\0') && (local_60 != (uint64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_60 == (uint64_t *)0x0) goto LAB_0130c2df;
      local_d0 = puVar8;
      cVar4 = FUN_00b518a0();
      if (cVar4 == '\0') {
        cVar4 = FUN_00b51910();
        if ((cVar4 != '\0') && ((uint64_t *)this_ptr[0x28] != (uint64_t *)0x0)) {
          local_58 = '\0';
          local_60 = (uint64_t *)0x0;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_50 = (uint64_t *)this_ptr[0x28];
          while( true ) {
            lVar11 = (int64_t)(int)local_48;
            iVar6 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar6);
            in_RCX = local_50;
            if (*(int *)((int64_t)local_50 + 0xc) <= iVar6) break;
            local_60 = *(uint64_t **)(local_50[2] + 8 + lVar11 * 8);
            pvVar10 = _pthread_getspecific((void*)local_50[2]);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01270230();
            FUN_00d23310();
            puVar8 = local_90;
            local_110 = CONCAT71(local_110._1_7_,local_88[0]);
            in_RCX = &local_110;
            puVar21 = (uint64_t *)local_88;
            if (local_88[0] == '\0') {
              puVar21 = in_RCX;
            }
            *(void*)puVar21 = 0;
            if ((local_88[0] != '\0') && (puVar8 != (uint64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar10 = _pthread_getspecific((void*)in_RCX);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012c71a0();
            cVar4 = FUN_00b518a0();
            if (cVar4 == '\0') {
              bVar23 = false;
            }
            else {
              pvVar10 = _pthread_getspecific((void*)in_RCX);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01270230();
              FUN_00d23310();
              puVar21 = local_90;
              local_98[0] = local_88[0];
              in_RCX = (uint64_t *)local_98;
              puVar14 = (uint64_t *)local_88;
              if (local_88[0] == '\0') {
                puVar14 = in_RCX;
              }
              *(void*)puVar14 = 0;
              if ((local_88[0] != '\0') && (puVar21 != (uint64_t *)0x0)) {
                FUN_00d50b20();
              }
              pvVar10 = _pthread_getspecific((void*)in_RCX);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012c71a0();
              cVar4 = FUN_00b518d0();
              cVar3 = FUN_00b518d0();
              bVar23 = cVar4 == cVar3;
              if ((local_150 != '\0') && (local_158 != 0)) {
                FUN_00d50b20();
              }
              if ((local_98[0] != '\0') && (puVar21 != (uint64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_1a0 != '\0') && (local_1a8 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_100 != '\0') && (local_108 != 0)) {
              FUN_00d50b20();
            }
            if (((char)local_110 != '\0') && (puVar8 != (uint64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_f0 != '\0') && (local_f8 != 0)) {
              FUN_00d50b20();
            }
            if (bVar23) {
              dVar25 = (double)FUN_00e7d6f0();
              pvVar10 = _pthread_getspecific((void*)in_RCX);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_b0 = (uint64_t *)FUN_0125a280();
              puVar8 = (uint64_t *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar8 = (uint64_t)&g_025c07e8;
              puVar8[7] = 0;
              puVar8[8] = 0;
              puVar8[9] = 0;
              FUN_00d500e0();
              if (puVar8 == local_78) {
                if (bVar24) {
                  FUN_00d50b20();
                  puVar8 = local_78;
                  bVar23 = bVar24;
                }
                else {
                  puVar8 = local_78;
                  bVar23 = true;
                }
              }
              else {
                bVar23 = true;
                if ((bVar24) && (local_78 != (uint64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              bVar24 = bVar23;
              local_78 = puVar8;
              pvVar10 = _pthread_getspecific((void*)in_RCX);
              if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                in_RCX = local_78;
              }
              FUN_012c7130();
              pvVar10 = _pthread_getspecific((void*)in_RCX);
              if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                in_RCX = local_78;
              }
              dVar25 = dVar25 - (double)local_b0;
              FUN_012c7210();
              pvVar10 = _pthread_getspecific((void*)in_RCX);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01270260();
              cVar4 = FUN_012ddb30();
              if (cVar4 != '\0') {
                pvVar10 = _pthread_getspecific((void*)in_RCX);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012642b0(param_1 - dVar25);
                pvVar10 = _pthread_getspecific((void*)in_RCX);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e6a70();
              }
              local_48 = CONCAT44(~local_48._4_4_,(int)local_48);
              break;
            }
            if (local_48._4_4_ != 0) {
              if ((int)local_48._4_4_ < 1) {
                iVar6 = -local_48._4_4_;
              }
              else {
                local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar6 = 0;
              }
              local_48 = CONCAT44(iVar6,(int)local_48);
            }
          }
          FUN_001159b0();
        }
      }
      else {
        puVar8 = (uint64_t *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = (uint64_t)&g_025c07e8;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        FUN_00d500e0();
        if (puVar8 == local_78) {
          if (bVar24) {
            FUN_00d50b20();
            puVar8 = local_78;
            bVar23 = bVar24;
          }
          else {
            bVar23 = true;
            puVar8 = local_78;
          }
        }
        else {
          bVar23 = true;
          if ((bVar24) && (local_78 != (uint64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_78 = puVar8;
        pvVar10 = _pthread_getspecific((void*)in_RCX);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          in_RCX = local_78;
        }
        FUN_012c7130();
        pvVar10 = _pthread_getspecific((void*)in_RCX);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          in_RCX = local_78;
        }
        FUN_012c7210(0);
        puVar8 = (uint64_t *)FUN_00e8fc40();
        FUN_0006e3a0();
        (**(code **)(*puVar8 + 0x18))();
        pvVar10 = _pthread_getspecific((void*)in_RCX);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        bVar5 = FUN_00b518d0();
        FUN_012595a0((float)bVar5 * g_023908e0);
        puVar9 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = &g_025bd940;
        puVar9[5] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        *(void*)(puVar9 + 4) = 0;
        FUN_00d500e0();
        pvVar10 = _pthread_getspecific((void*)in_RCX);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264910();
        pvVar10 = _pthread_getspecific((void*)in_RCX);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01270260();
        pvVar10 = _pthread_getspecific((void*)in_RCX);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01259540(g_023b2568);
        pvVar10 = _pthread_getspecific((void*)in_RCX);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e7d6f0();
        FUN_012642b0();
        (**(code **)(*(int64_t *)this_ptr[0x20] + 0x668))();
        local_58 = '\0';
        local_60 = puVar8;
        FUN_00d21140();
        if ((local_58 != '\0') && (local_60 != (uint64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        FUN_00d50b20();
        bVar24 = bVar23;
      }
      FUN_00d50b20();
    } while( true );
  }
LAB_0130c318:
  while( true ) {
    pvVar10 = _pthread_getspecific((void*)in_RCX);
    if ((pvVar10 == (void *)0x0) || (lVar11 = FUN_00e8b990(), lVar11 == 0)) {
      uVar20 = local_a8[0x23];
    }
    else {
      uVar20 = *(uint64_t *)(local_a8[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4] + 0x118);
      in_RCX = local_a8;
    }
    if (uVar20 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x610))();
    puVar8 = local_60;
    if (local_58 == '\0') {
      if (((local_60 != (uint64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
         (local_60 != (uint64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    if (uVar20 != 0) {
      FUN_00d50b20();
    }
    if (puVar8 == (uint64_t *)0x0) break;
    (**(code **)(*(int64_t *)this_ptr[0x20] + 0x668))(0,0);
    local_58 = '\0';
    local_60 = puVar8;
    FUN_00d21140();
    if ((local_58 != '\0') && (local_60 != (uint64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  cVar4 = (**(code **)(*this_ptr + 0x5e8))();
  if ((cVar4 == '\0') || (cVar4 = (**(code **)(*this_ptr + 0x638))(), cVar4 != '\0')) {
    if (*(int *)(this_ptr[0x29] + 0xc) == 0) {
      return;
    }
    (**(code **)(*(int64_t *)this_ptr[0x20] + 0x688))();
    (**(code **)(*this_ptr + 0x628))();
    puVar8 = local_60;
    if ((local_58 != '\0') && (local_60 != (uint64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar8 == (uint64_t *)0x0) {
      return;
    }
    puVar8 = (uint64_t *)this_ptr[0x29];
    if (puVar8 != (uint64_t *)0x0) {
      local_58 = '\0';
      local_60 = (uint64_t *)0x0;
      local_40 = 0;
      local_48 = 0;
      local_50 = puVar8;
      if (0 < *(int *)((int64_t)puVar8 + 0xc)) {
        lVar11 = 0;
        do {
          local_90 = *(uint64_t **)(puVar8[2] + lVar11 * 8);
          local_88[0] = '\0';
          local_60 = local_90;
          FUN_00d21140();
          if ((local_88[0] != '\0') && (local_90 != (uint64_t *)0x0)) {
            FUN_00d50b20();
          }
          lVar11 = lVar11 + 1;
          local_48 = CONCAT44(local_48._4_4_,(int)lVar11);
        } while ((int)lVar11 < *(int *)((int64_t)puVar8 + 0xc));
      }
      FUN_001159b0();
    }
    FUN_00d216c0();
    return;
  }
  cVar4 = (**(code **)(*this_ptr + 0x630))();
  if ((cVar4 != '\0') && (*(int *)(this_ptr[0x29] + 0xc) != 0)) {
    (**(code **)(*(int64_t *)this_ptr[0x20] + 0x688))();
  }
  lVar11 = this_ptr[0x1e];
  pvVar10 = _pthread_getspecific((void*)in_RCX);
  if (pvVar10 != (void *)0x0) {
    lVar11 = this_ptr[0x1e];
    lVar12 = FUN_00e8b990();
    if (lVar12 != 0) {
      lVar11 = *(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
    }
  }
  plVar1 = *(int64_t **)(lVar11 + 0x118);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_d0 = (uint64_t *)(**(code **)(*this_ptr + 0x5f8))();
  pvVar10 = _pthread_getspecific((void*)in_RCX);
  plVar19 = plVar1;
  if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
    plVar19 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
  }
  dVar25 = (double)(**(code **)(*plVar19 + 0x380))();
  local_78 = (uint64_t *)(dVar25 * (double)local_d0);
  local_c8 = (double)local_78;
  uStack_c0 = extraout_XMM0_Qb;
  if ((double)local_d0 < 0.0) {
    uStack_c0 = _UNK_023945b8 ^ extraout_XMM0_Qb;
    local_c8 = (double)(g_023945b0 ^ (uint64_t)local_78);
  }
  (**(code **)(*this_ptr + 0x420))();
  dVar25 = (double)(~-(uint64_t)((double)local_d0 < g_02390448) & (uint64_t)param_1 |
                   (uint64_t)((double)local_78 + param_1) &
                   -(uint64_t)((double)local_d0 < g_02390448));
  local_b8 = local_b8 + local_c8;
  FUN_0190a380();
  uVar13 = FUN_012dde10();
  local_e8 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (uint64_t *)0x0) {
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != (uint64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0130c7ab;
    }
LAB_0130c833:
    local_c8 = (double)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
LAB_0130c9aa:
    local_78 = (uint64_t *)0x0;
    uVar13 = FUN_0190a220();
    local_e0 = (uint64_t *)CONCAT44(local_e0._4_4_,(int)CONCAT71((int7)((uint64_t)uVar13 >> 8),1))
    ;
    bVar5 = 0;
    local_b0 = (uint64_t *)0x0;
  }
  else {
    if (local_60 == (uint64_t *)0x0) goto LAB_0130c833;
LAB_0130c7ab:
    FUN_012ddd50();
    if (local_60 == (uint64_t *)0x0) {
      cVar4 = '\x01';
    }
    else {
      FUN_012ddd50();
      puVar8 = local_90;
      pvVar10 = _pthread_getspecific((void*)in_RCX);
      puVar21 = local_90;
      if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), puVar8 = puVar21, lVar11 != 0)) {
        puVar8 = (uint64_t *)puVar21[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
      }
      cVar4 = (**(code **)(*puVar8 + 0x380))();
      if ((local_88[0] != '\0') && (local_90 != (uint64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_58 != '\0') && (local_60 != (uint64_t *)0x0)) {
      FUN_00d50b20();
    }
    pVar16 = (void*)in_RCX;
    if (cVar4 == '\0') {
LAB_0130c9a8:
      local_c8 = 0.0;
      goto LAB_0130c9aa;
    }
    local_b0 = (uint64_t *)0x0;
    local_78 = (uint64_t *)0x0;
    pvVar10 = _pthread_getspecific(pVar16);
    if (pvVar10 != (void *)0x0) {
      local_b0 = (uint64_t *)0x0;
      local_78 = (uint64_t *)0x0;
      FUN_00e8b990();
    }
    local_b0 = (uint64_t *)0x0;
    local_78 = (uint64_t *)0x0;
    dVar26 = (double)FUN_0123f4f0(local_d0);
    pvVar10 = _pthread_getspecific(pVar16);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01530870(this_ptr[0x15],local_b8 + dVar26);
    local_78 = local_60;
    in_RCX = local_60;
    if (local_60 == (uint64_t *)0x0) goto LAB_0130c9a8;
    puVar8 = local_60;
    if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) && (local_60 != (uint64_t *)0x0)
       ) {
      FUN_00d50b20();
    }
    in_RCX = (uint64_t *)CONCAT71((int7)((uint64_t)puVar8 >> 8),1);
    local_b0 = in_RCX;
    (**(code **)(*this_ptr + 0x420))();
    pvVar10 = _pthread_getspecific((void*)in_RCX);
    if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
      in_RCX = local_78;
    }
    uVar13 = FUN_013201a0();
    local_b0 = (uint64_t *)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
    FUN_0190a380(extraout_XMM0_Qa,local_c8 + dVar26);
    local_e0 = (uint64_t *)((uint64_t)local_e0._4_4_ << 0x20);
    bVar5 = 1;
    local_c8 = 0.0;
  }
  (**(code **)(*this_ptr + 0x5d0))();
  puVar8 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (uint64_t *)0x0) {
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != (uint64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0130c9ff;
    }
    if (*(char *)((int64_t)this_ptr + 0x16a) == '\0') goto LAB_0130cc28;
  }
  else {
LAB_0130c9ff:
    if (*(char *)((int64_t)this_ptr + 0x16a) == '\0') {
      if (puVar8 != (uint64_t *)0x0) {
        iVar6 = FUN_0130efc0();
        iVar7 = FUN_0130f0e0();
        if (iVar6 != 0 || iVar7 != 0) {
          pvVar10 = _pthread_getspecific((void*)in_RCX);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012eb770();
          puVar21 = local_60;
          if ((local_58 != '\0') && (local_60 != (uint64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar21 != (uint64_t *)0x0) {
            pvVar10 = _pthread_getspecific((void*)in_RCX);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012f7cb0();
            pvVar10 = _pthread_getspecific((void*)in_RCX);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012f7d90();
            if (iVar6 != 0) {
              pvVar10 = _pthread_getspecific((void*)in_RCX);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012f94c0();
            }
            if (iVar7 != 0) {
              pvVar10 = _pthread_getspecific((void*)in_RCX);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012f9500();
            }
          }
        }
      }
LAB_0130cc28:
      cVar4 = (**(code **)(*this_ptr + 0x620))();
      if (cVar4 == '\0') {
        pvVar10 = _pthread_getspecific((void*)in_RCX);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          local_a8 = (uint64_t *)local_a8[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
        }
        lVar11 = this_ptr[0x29];
        if (lVar11 != 0) {
          FUN_00d50b00();
        }
        uVar13 = FUN_012e9880(dVar25);
        puVar21 = local_60;
        if (local_60 == (uint64_t *)0x0) {
          puVar21 = (uint64_t *)0x0;
          local_a0 = 0;
        }
        else if (local_58 == '\0') {
          uVar13 = FUN_00d50b00();
          local_a0 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
          if ((local_58 != '\0') && (local_60 != (uint64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_58 = '\0';
          local_a0 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
        }
        if (lVar11 != 0) {
          FUN_00d50b20();
        }
        local_d4 = 0x7fffffff;
      }
      else {
        pvVar10 = _pthread_getspecific((void*)in_RCX);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          in_RCX = local_a8;
        }
        lVar11 = this_ptr[0x29];
        if (lVar11 != 0) {
          FUN_00d50b00();
        }
        uVar13 = FUN_012e9880(dVar25);
        puVar21 = local_60;
        if (local_60 == (uint64_t *)0x0) {
          puVar21 = (uint64_t *)0x0;
          uVar13 = 0;
          local_a0 = 0;
        }
        else if (local_58 == '\0') {
          uVar13 = FUN_00d50b00();
          uVar13 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
          local_a0 = uVar13;
          if ((local_58 != '\0') && (local_60 != (uint64_t *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
        }
        else {
          local_58 = '\0';
          uVar13 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
          local_a0 = uVar13;
        }
        if (lVar11 != 0) {
          uVar13 = FUN_00d50b20();
        }
        local_d4 = 0x7fffffff;
        if (local_c8._0_1_ == '\0') {
          FUN_012ddd50();
          if (local_60 == (uint64_t *)0x0) {
            cVar4 = '\x01';
          }
          else {
            FUN_012ddd50();
            puVar14 = local_90;
            pvVar10 = _pthread_getspecific((void*)in_RCX);
            puVar2 = local_90;
            if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), puVar14 = puVar2, lVar11 != 0)
               ) {
              puVar14 = (uint64_t *)puVar2[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
            }
            cVar4 = (**(code **)(*puVar14 + 0x380))();
            if ((local_88[0] != '\0') && (local_90 != (uint64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_58 != '\0') && (local_60 != (uint64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') {
            local_80 = puVar21;
            pvVar10 = _pthread_getspecific((void*)in_RCX);
            puVar14 = local_e8;
            if ((pvVar10 != (void *)0x0) &&
               (lVar11 = FUN_00e8b990(), puVar14 = local_e8, lVar11 != 0)) {
              puVar14 = (uint64_t *)local_e8[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
              in_RCX = local_e8;
            }
            local_c8 = (double)puVar14[0xb];
            pVar16 = (void*)in_RCX;
            pvVar10 = _pthread_getspecific(pVar16);
            if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
              pVar16 = (void*)local_e8;
            }
            uVar13 = FUN_01530870(dVar25);
            puVar14 = local_60;
            uVar15 = (undefined7)((uint64_t)uVar13 >> 8);
            uVar22 = (undefined7)((uint64_t)puVar21 >> 8);
            if (local_60 == local_78) {
              bVar5 = (byte)local_e0 & local_60 != (uint64_t *)0x0;
              pVar16 = CONCAT31((int3)((uint64_t)local_e0 >> 8),bVar5);
              if (bVar5 == 1) {
                if (local_58 != '\0') goto LAB_0130d05f;
                uVar20 = CONCAT71(uVar22,1);
                local_b0 = (uint64_t *)0x0;
                FUN_00d50b00();
              }
              else {
                uVar20 = (uint64_t)local_b0 & 0xffffffff;
              }
LAB_0130d0e5:
              if ((local_58 != '\0') && (local_60 != (uint64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (local_78 == (uint64_t *)0x0) {
                local_b0 = (uint64_t *)(uVar20 & 0xffffffff);
LAB_0130d692:
                local_c8 = 0.0;
                local_78 = (uint64_t *)0x0;
                puVar21 = local_80;
                goto LAB_0130d967;
              }
              local_b0 = (uint64_t *)(uVar20 & 0xffffffff);
            }
            else {
              if (local_58 == '\0') {
                if (local_60 != (uint64_t *)0x0) {
                  uVar13 = FUN_00d50b00();
                }
                if ((bool)(bVar5 & local_78 != (uint64_t *)0x0)) {
                  local_b0 = (uint64_t *)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
                  local_78 = puVar14;
                  FUN_00d50b20();
                  uVar20 = CONCAT71(uVar22,1);
                }
                else {
                  uVar20 = CONCAT71(uVar22,1);
                  local_78 = puVar14;
                }
                goto LAB_0130d0e5;
              }
              bVar24 = local_78 != (uint64_t *)0x0;
              local_78 = puVar14;
              if ((bool)(bVar5 & bVar24)) {
                local_b0 = (uint64_t *)CONCAT71(uVar15,1);
                local_78 = local_60;
                FUN_00d50b20();
                local_78 = puVar14;
                uVar15 = extraout_var;
              }
LAB_0130d05f:
              local_b0 = (uint64_t *)CONCAT71(uVar15,1);
              if (local_78 == (uint64_t *)0x0) goto LAB_0130d692;
            }
            puVar21 = local_80;
            FUN_012d2570();
            pvVar10 = _pthread_getspecific(pVar16);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012caf10();
            puVar14 = local_60;
            if (local_58 == '\0') {
              if (((local_60 != (uint64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
                 (local_60 != (uint64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_58 = '\0';
            }
            if ((local_88[0] != '\0') && (local_90 != (uint64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00e7bcc0();
            pvVar10 = _pthread_getspecific(pVar16);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar10 = _pthread_getspecific(pVar16);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01320130();
            pVar16 = 0;
            FUN_016cb9d0(0,4);
            pvVar10 = _pthread_getspecific(pVar16);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar10 = _pthread_getspecific(pVar16);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013201a0();
            pVar16 = 0;
            uVar20 = FUN_016cb9d0();
            if ((extraout_var_00 == 0) || (uVar20 >> 0x20 == 0)) {
LAB_0130d2d7:
              local_e0 = puVar14;
              pvVar10 = _pthread_getspecific(pVar16);
              if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                pVar16 = (void*)local_78;
              }
              local_b8 = (double)FUN_013201a0();
              pvVar10 = _pthread_getspecific(pVar16);
              if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                local_a8 = (uint64_t *)local_a8[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
              }
              lVar11 = this_ptr[0x29];
              if (lVar11 != 0) {
                FUN_00d50b00();
              }
              FUN_012e98c0(local_b8 - local_c8);
              puVar14 = local_60;
              if (local_58 == '\0') {
                if (((local_60 != (uint64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
                   (local_60 != (uint64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_58 = '\0';
              }
              if (lVar11 != 0) {
                FUN_00d50b20();
              }
              local_a8 = puVar14;
              if (puVar14 == (uint64_t *)0x0) {
                if (puVar21 == (uint64_t *)0x0) {
                  puVar21 = (uint64_t *)0x0;
                  local_d4 = 0;
                  puVar14 = local_e0;
                }
                else {
LAB_0130d6dc:
                  local_58 = 0;
                  local_60 = (uint64_t *)0x0;
                  local_50 = puVar21;
                  local_48 = 0xffffffff;
                  local_40 = 0;
                  uVar17 = 0;
                  while( true ) {
                    if (uVar17 != 0) {
                      if ((int)uVar17 < 1) {
                        iVar6 = -uVar17;
                      }
                      else {
                        local_48 = CONCAT44(local_48._4_4_,(int)local_48 - uVar17);
                        FUN_00d23690(uVar17,uVar17);
                        local_40 = local_40 + local_48._4_4_;
                        iVar6 = 0;
                      }
                      local_48 = CONCAT44(iVar6,(int)local_48);
                    }
                    lVar11 = (int64_t)(int)local_48;
                    iVar6 = (int)local_48 + 1;
                    local_48 = CONCAT44(local_48._4_4_,iVar6);
                    if (*(int *)((int64_t)local_50 + 0xc) <= iVar6) break;
                    uVar20 = local_50[2];
                    local_60 = *(uint64_t **)(uVar20 + 8 + lVar11 * 8);
                    pvVar10 = _pthread_getspecific((void*)uVar20);
                    pVar16 = (void*)uVar20;
                    if (pvVar10 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_0125e930();
                    if (local_90 == (uint64_t *)0x0) {
                      bVar5 = 0;
                    }
                    else {
                      pvVar10 = _pthread_getspecific(pVar16);
                      if (pvVar10 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_0125e930();
                      pvVar10 = _pthread_getspecific(pVar16);
                      if (pvVar10 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_0152ebe0();
                      pvVar10 = _pthread_getspecific(pVar16);
                      if (pvVar10 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      local_110 = FUN_01507970();
                      bVar5 = 0;
                      if ((local_110 >> 0x20 != 0) && (extraout_var_00 != 0)) {
                        bVar5 = FUN_00e7c020();
                        bVar5 = bVar5 ^ 1;
                      }
                      if ((local_100 != '\0') && (local_108 != 0)) {
                        FUN_00d50b20();
                      }
                      if ((local_f0 != '\0') && (local_f8 != 0)) {
                        FUN_00d50b20();
                      }
                    }
                    if ((local_88[0] != '\0') && (local_90 != (uint64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    uVar17 = local_48._4_4_;
                    if (bVar5 != 0) {
                      uVar17 = ~local_48._4_4_;
                      local_48 = CONCAT44(uVar17,(int)local_48);
                    }
                  }
                  FUN_001159b0();
                  puVar2 = local_a8;
                  local_d4 = *(int *)((int64_t)puVar21 + 0xc);
                  local_60 = local_a8;
                  local_58 = '\0';
                  FUN_00d214d0();
                  puVar14 = local_e0;
                  if ((local_58 != '\0') && (local_60 != (uint64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (puVar2 != (uint64_t *)0x0) goto LAB_0130d949;
                }
              }
              else {
                local_58 = '\0';
                local_60 = (uint64_t *)0x0;
                local_50 = puVar14;
                local_48 = 0xffffffff;
                local_40 = 0;
                uVar17 = 0;
                while( true ) {
                  if (uVar17 != 0) {
                    if ((int)uVar17 < 1) {
                      iVar6 = -uVar17;
                    }
                    else {
                      local_48 = CONCAT44(local_48._4_4_,(int)local_48 - uVar17);
                      FUN_00d23690(uVar17,uVar17);
                      local_40 = local_40 + local_48._4_4_;
                      iVar6 = 0;
                    }
                    local_48 = CONCAT44(iVar6,(int)local_48);
                  }
                  lVar11 = (int64_t)(int)local_48;
                  iVar6 = (int)local_48 + 1;
                  local_48 = CONCAT44(local_48._4_4_,iVar6);
                  if (*(int *)((int64_t)local_50 + 0xc) <= iVar6) break;
                  uVar18 = local_50[2];
                  local_60 = *(uint64_t **)(uVar18 + 8 + lVar11 * 8);
                  pvVar10 = _pthread_getspecific((void*)uVar18);
                  pVar16 = (void*)uVar18;
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0125e930();
                  if (local_90 == (uint64_t *)0x0) {
                    cVar4 = '\0';
                  }
                  else {
                    pvVar10 = _pthread_getspecific(pVar16);
                    if (pvVar10 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_0125e930();
                    pvVar10 = _pthread_getspecific(pVar16);
                    if (pvVar10 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_0152ebe0();
                    pvVar10 = _pthread_getspecific(pVar16);
                    if (pvVar10 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    local_110 = FUN_01507970();
                    cVar4 = '\0';
                    if ((local_110 >> 0x20 != 0) &&
                       (local_1a8._4_4_ = (int)(uVar20 >> 0x20), local_1a8._4_4_ != 0)) {
                      cVar4 = FUN_00e7c020();
                    }
                    if ((local_100 != '\0') && (local_108 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_f0 != '\0') && (local_f8 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_88[0] != '\0') && (local_90 != (uint64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  uVar17 = local_48._4_4_;
                  if (cVar4 != '\0') {
                    uVar17 = ~local_48._4_4_;
                    local_48 = CONCAT44(uVar17,(int)local_48);
                  }
                }
                FUN_001159b0();
                puVar2 = local_a8;
                if (puVar21 != (uint64_t *)0x0) goto LAB_0130d6dc;
                uVar13 = FUN_00d50b00();
                local_a0 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
                local_d4 = 0;
                puVar14 = local_e0;
                puVar21 = puVar2;
LAB_0130d949:
                FUN_00d50b20();
              }
            }
            else {
              cVar4 = FUN_00e7c000();
              local_d4 = 0x7fffffff;
              if (cVar4 == '\0') goto LAB_0130d2d7;
            }
            if (puVar14 != (uint64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          local_c8 = 0.0;
        }
        else {
          local_c8 = (double)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
        }
      }
LAB_0130d967:
      bVar24 = true;
      if (puVar21 == (uint64_t *)0x0) {
        bVar23 = true;
        local_80 = (uint64_t *)0x0;
      }
      else {
        local_58 = '\0';
        local_60 = (uint64_t *)0x0;
        local_48 = 0xffffffff;
        local_40 = 0;
        local_80 = puVar21;
        local_50 = puVar21;
        local_48._4_4_ = 0;
        while( true ) {
          if (local_48._4_4_ != 0) {
            if ((int)local_48._4_4_ < 1) {
              iVar6 = -local_48._4_4_;
            }
            else {
              iVar6 = (int)local_48 - local_48._4_4_;
              local_48 = CONCAT44(local_48._4_4_,iVar6);
              FUN_00d23690();
              local_40 = local_40 + local_48._4_4_;
              iVar6 = 0;
            }
            local_48 = CONCAT44(iVar6,(int)local_48);
          }
          lVar11 = (int64_t)(int)local_48;
          iVar6 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar6);
          if (*(int *)((int64_t)local_50 + 0xc) <= iVar6) break;
          uVar20 = local_50[2];
          local_60 = *(uint64_t **)(uVar20 + 8 + lVar11 * 8);
          cVar4 = FUN_0130f200();
          puVar21 = local_60;
          pVar16 = (void*)uVar20;
          if (cVar4 == '\0') {
            if (this_ptr[0x24] != 0) {
              FUN_013fe9d0();
              puVar14 = local_90;
              if ((local_88[0] != '\0') && (local_90 != (uint64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (puVar14 == puVar21) goto LAB_0130d9b0;
            }
            local_90 = local_60;
            local_88[0] = '\0';
            cVar4 = FUN_00d24090();
            if ((local_88[0] != '\0') && (local_90 != (uint64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar4 == '\0') {
              pvVar10 = _pthread_getspecific(pVar16);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar26 = (double)FUN_0129b620();
              if (!NAN(dVar26)) {
                pvVar10 = _pthread_getspecific(pVar16);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar26 = (double)FUN_0129b620();
                if (dVar26 <= dVar25) goto LAB_0130d9b0;
              }
              puVar21 = local_60;
              if (((double)local_d0 != 0.0) || (NAN((double)local_d0))) {
                if ((double)local_d0 <= 0.0) {
                  pvVar10 = _pthread_getspecific(pVar16);
                  puVar14 = local_60;
                  if ((pvVar10 != (void *)0x0) &&
                     (lVar11 = FUN_00e8b990(), puVar21 = puVar14, lVar11 != 0)) {
                    puVar21 = (uint64_t *)puVar14[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
                  }
                  puVar14 = local_60;
                  local_a8 = (uint64_t *)puVar21[0x1d];
                  pvVar10 = _pthread_getspecific(pVar16);
                  puVar21 = local_60;
                  if ((pvVar10 != (void *)0x0) &&
                     (lVar11 = FUN_00e8b990(), puVar14 = puVar21, lVar11 != 0)) {
                    puVar14 = (uint64_t *)puVar21[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
                  }
                  puVar21 = local_60;
                  local_b8 = (double)puVar14[0x1e];
                  pvVar10 = _pthread_getspecific(pVar16);
                  puVar14 = local_60;
                  if ((pvVar10 != (void *)0x0) &&
                     (lVar11 = FUN_00e8b990(), puVar21 = puVar14, lVar11 != 0)) {
                    puVar21 = (uint64_t *)puVar14[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
                  }
                  local_a8 = (uint64_t *)
                             ((((double)local_a8 + local_b8) - dVar25) / (double)local_d0);
                  local_b8 = (double)puVar21[0x1e];
                }
                else {
                  pvVar10 = _pthread_getspecific(pVar16);
                  puVar14 = local_60;
                  if ((pvVar10 != (void *)0x0) &&
                     (lVar11 = FUN_00e8b990(), puVar21 = puVar14, lVar11 != 0)) {
                    puVar21 = (uint64_t *)puVar14[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
                  }
                  puVar14 = local_60;
                  local_a8 = (uint64_t *)(((double)puVar21[0x1d] - dVar25) / (double)local_d0);
                  local_b8 = 0.0;
                  if ((double)local_a8 < 0.0) {
                    pvVar10 = _pthread_getspecific(pVar16);
                    puVar21 = local_60;
                    if ((pvVar10 != (void *)0x0) &&
                       (lVar11 = FUN_00e8b990(), puVar14 = puVar21, lVar11 != 0)) {
                      puVar14 = (uint64_t *)puVar21[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4]
                      ;
                    }
                    local_b8 = (double)puVar14[0x1d];
                    goto LAB_0130db86;
                  }
                }
              }
              else {
                pvVar10 = _pthread_getspecific(pVar16);
                puVar14 = local_60;
                if ((pvVar10 != (void *)0x0) &&
                   (lVar11 = FUN_00e8b990(), puVar21 = puVar14, lVar11 != 0)) {
                  puVar21 = (uint64_t *)puVar14[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
                }
                local_b8 = (double)puVar21[0x1d];
LAB_0130db86:
                local_b8 = dVar25 - local_b8;
                local_a8 = (uint64_t *)0x0;
              }
              local_90 = local_60;
              local_88[0] = '\0';
              FUN_00d21140();
              if ((local_88[0] != '\0') && (local_90 != (uint64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (local_40 + (int)local_48 < local_d4) {
                (**(code **)(*(int64_t *)this_ptr[0x20] + 0x668))
                          (local_b8,(int64_t)(int)((double)local_a8 * (double)this_ptr[3]) +
                                    this_ptr[0x12]);
              }
              else {
                (**(code **)(*(int64_t *)this_ptr[0x20] + 0x6a0))
                          (local_b8,(int64_t)(int)((double)local_a8 * (double)this_ptr[3]) +
                                    this_ptr[0x12]);
              }
            }
          }
LAB_0130d9b0:
        }
        FUN_001159b0();
        bVar23 = false;
        bVar24 = true;
      }
      goto LAB_0130deac;
    }
  }
  bVar23 = true;
  local_80 = (uint64_t *)0x0;
  local_a0 = 0;
  bVar24 = false;
LAB_0130deac:
  iVar6 = *(int *)(this_ptr[0x29] + 0xc);
  if ((iVar6 != 0) && (0 < iVar6)) {
    uVar20 = (uint64_t)(iVar6 - 1);
    if (bVar24) {
      while( true ) {
        cVar4 = FUN_0130f200();
        if (cVar4 != '\0') {
          (**(code **)(*(int64_t *)this_ptr[0x20] + 0x670))();
        }
        if ((int64_t)uVar20 < 1) break;
        uVar20 = uVar20 - 1;
      }
    }
    else {
      for (; (**(code **)(*(int64_t *)this_ptr[0x20] + 0x670))(), 0 < (int64_t)uVar20;
          uVar20 = uVar20 - 1) {
      }
    }
  }
  if (puVar8 != (uint64_t *)0x0) {
    FUN_00d50b20();
  }
  puVar8 = local_78;
  if (local_c8._0_1_ == '\0') {
    FUN_00d50b20();
  }
  if (((char)local_b0 != '\0') && (puVar8 != (uint64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_a0 != '\0' && !bVar23) {
    FUN_00d50b20();
  }
  return;
LAB_0130c2df:
  if ((bVar24) && (local_78 != (uint64_t *)0x0)) {
    FUN_00d50b20();
  }
  goto LAB_0130c318;
}

