// Function: FUN_009de670
// Address: 009de670
// Size: 1791 bytes
// Class: GNInt
// === GNInt properties ===
//   GNInt           _assembledElementRendererCount
//   bool            _processPeriodBased
//   bool            _usesPososc
//   bool            _resetAllPhasesAtAttack
//   bool            _continueAllPhasesByDefault
//   bool            _renderWithOriginalTime
//   float           _freqDomainFormantResolution
//   GNInt           _freqDomainFourierSize
//   float           _freqDomainPhaseResetParametersScale
//   float           _formantPitchUpCompensationFactor
//   float           _formantPitchDownCompensationFactor
//   bool            _didFail
//   GNInt           _expectedResultLength
//   GNInt           _httpStatusCode
//   bool            _isSuspended
//   SInt64          _uploadLength
//   GNInt           _receivedResultLength
//   bool            _didTimeOut
//   float           _cent
//   GNInt           _westernStandardPitchIndexOffset
//   bool            _isLoop
//   GNInt           _numerator
//   GNInt           _denominator
//   GNInt           _beats
//   GNInt           _tonalKey
//   GNInt           _tonalGender
//   float           _time
//   float           _nextBeepStartTime
//   float           _beepTime
//   float           _beepLength
//   ... +133 more


int64_t FUN_009de670(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  char *pcVar1;
  void*puVar2;
  void*puVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  bool bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte *pbVar32;
  char cVar33;
  char cVar34;
  byte bVar35;
  byte bVar36;
  uint uVar37;
  int iVar38;
  int64_t lVar39;
  void *pvVar40;
  void*puVar41;
  void*puVar42;
  void *pvVar43;
  byte *pbVar44;
  void *pvVar45;
  int64_t lVar46;
  byte *pbVar47;
  void*arg1;
  int64_t *this_ptr;
  uint uVar48;
  void *pvVar49;
  byte local_c0;
  uint8_t local_bf [7];
  void *local_b8;
  byte *local_a8;
  byte *local_a0;
  byte *local_98;
  byte *local_90;
  void *local_88;
  uint8_t local_78 [16];
  byte *local_68;
  byte local_58;
  undefined7 uStack_57;
  void *local_50;
  byte *local_48;
  void *local_40;
  char local_33;
  byte local_32;
  uint8_t local_31;
  
  lVar39 = FUN_009d8a9c(param_1,0x110);
  local_33 = *(char *)(arg1 + 6);
  local_88 = (void *)(lVar39 + 0x10);
  ___bzero();
  puVar41 = (void*)*arg1;
  while (puVar3 = puVar41, puVar3 != arg1 + 1) {
    lVar46 = 0;
    do {
      if ((char)this_ptr[3] == '\0') {
        cVar34 = *(char *)((int64_t)puVar3 + 0x19);
        cVar33 = (char)lVar46;
      }
      else {
        cVar33 = (**(code **)(**(int64_t **)(*(int64_t *)this_ptr[1] + 8) + 0x28))();
        cVar34 = *(char *)((int64_t)puVar3 + 0x19);
        if ((char)this_ptr[3] != '\0') {
          cVar34 = (**(code **)(**(int64_t **)(*(int64_t *)this_ptr[1] + 8) + 0x28))();
        }
      }
      if (cVar33 == cVar34) {
        *(void*)((int64_t)local_88 + lVar46) = 1;
      }
      lVar46 = lVar46 + 1;
    } while (lVar46 != 0x100);
    puVar2 = (void*)puVar3[1];
    if ((void*)puVar3[1] == (void*)0x0) {
      puVar41 = (void*)puVar3[2];
      if (*(void**)puVar3[2] != puVar3) {
        do {
          puVar3 = (void*)puVar3[2];
          puVar41 = (void*)puVar3[2];
        } while (*(void**)puVar3[2] != puVar3);
      }
    }
    else {
      do {
        puVar41 = puVar2;
        puVar2 = (void*)*puVar41;
      } while (puVar2 != (void*)0x0);
    }
  }
  pbVar47 = (byte *)arg1[3];
  pbVar44 = (byte *)arg1[4];
  if (pbVar47 != pbVar44) {
    local_98 = (byte *)((uint64_t)&local_58 | 1);
    local_a0 = (byte *)((uint64_t)local_78 | 1);
    local_40 = (void *)((uint64_t)&local_c0 | 1);
    local_90 = pbVar44;
    do {
      bVar35 = *pbVar47;
      if ((char)this_ptr[3] == '\0') {
        bVar36 = pbVar47[2];
      }
      else {
        bVar35 = (**(code **)(**(int64_t **)(*(int64_t *)this_ptr[1] + 8) + 0x28))();
        bVar36 = pbVar47[2];
        if ((char)this_ptr[3] != '\0') {
          bVar36 = (**(code **)(**(int64_t **)(*(int64_t *)this_ptr[1] + 8) + 0x28))();
        }
      }
      if ((*(byte *)(*this_ptr + 0x2a) & 0x20) == 0) {
        if (bVar36 < bVar35) {
          return 0;
        }
        _memset(local_88,((uint)bVar36 - (uint)bVar35) + 1,param_3);
      }
      else {
        local_31 = 0;
        puVar42 = &local_31;
        local_32 = bVar35;
        FUN_009d76b8(puVar42,&local_32);
        local_32 = bVar36;
        FUN_009d76b8(puVar42,&local_32);
        if ((local_78[0] & 1) == 0) {
          pvVar49 = (void *)(uint64_t)(local_78[0] >> 1);
        }
        else {
          pvVar49 = (void *)local_78._8_8_;
        }
        pvVar43 = (void *)CONCAT71((int7)((uint64_t)puVar42 >> 8),1);
        bVar35 = local_58 & 1;
        pvVar40 = local_50;
        if (bVar35 == 0) {
          pvVar40 = (void *)(uint64_t)(local_58 >> 1);
        }
        pvVar45 = pvVar40;
        if (pvVar49 < pvVar40) {
          pvVar45 = pvVar49;
        }
        local_a8 = pbVar47;
        if (pvVar45 == (void *)0x0) {
LAB_009de8f2:
          bVar17 = true;
          if (pvVar49 <= pvVar40) {
LAB_009de901:
            lVar46 = 0;
            do {
              local_32 = (byte)lVar46;
              puVar42 = &local_31;
              FUN_009d76b8(puVar42,&local_32);
              if ((local_78[0] & 1) == 0) {
                pvVar49 = (void *)(uint64_t)(local_78[0] >> 1);
              }
              else {
                pvVar49 = (void *)local_78._8_8_;
              }
              pvVar43 = (void *)CONCAT71((int7)((uint64_t)puVar42 >> 8),1);
              bVar35 = local_c0 & 1;
              pvVar40 = local_b8;
              if (bVar35 == 0) {
                pvVar40 = (void *)(uint64_t)(local_c0 >> 1);
              }
              pvVar45 = pvVar40;
              if (pvVar49 < pvVar40) {
                pvVar45 = pvVar49;
              }
              if (pvVar45 == (void *)0x0) {
LAB_009de991:
                if (pvVar49 <= pvVar40) {
LAB_009de996:
                  pvVar43 = (void *)CONCAT71((int7)((uint64_t)pvVar43 >> 8),1);
                  pvVar49 = local_50;
                  if ((local_58 & 1) == 0) {
                    pvVar49 = (void *)(uint64_t)(local_58 >> 1);
                  }
                  pvVar45 = pvVar49;
                  if (pvVar40 < pvVar49) {
                    pvVar45 = pvVar40;
                  }
                  if (pvVar45 == (void *)0x0) {
LAB_009de9e7:
                    if (pvVar49 < pvVar40) goto LAB_009dea00;
                  }
                  else {
                    iVar38 = _memcmp(pvVar43,pvVar45,param_3);
                    if (iVar38 == 0) goto LAB_009de9e7;
                    if (iVar38 < 0) goto LAB_009dea00;
                  }
                  pvVar43 = (void *)CONCAT71((int7)((uint64_t)pvVar43 >> 8),1);
                  *(void*)((int64_t)local_88 + lVar46) = 1;
                  bVar35 = local_c0 & 1;
                }
              }
              else {
                iVar38 = _memcmp(pvVar43,pvVar45,param_3);
                if (iVar38 == 0) goto LAB_009de991;
                if (-1 < iVar38) goto LAB_009de996;
              }
LAB_009dea00:
              if (bVar35 != 0) {
                operator_delete(pvVar43);
              }
              lVar46 = lVar46 + 1;
            } while (lVar46 != 0x100);
            bVar35 = local_58 & 1;
            bVar17 = false;
          }
        }
        else {
          iVar38 = _memcmp(pvVar43,pvVar45,param_3);
          if (iVar38 == 0) goto LAB_009de8f2;
          bVar17 = true;
          if (-1 < iVar38) goto LAB_009de901;
        }
        if (bVar35 != 0) {
          operator_delete(pvVar43);
        }
        pbVar44 = local_90;
        pbVar47 = local_a8;
        if ((local_78[0] & 1) != 0) {
          operator_delete(pvVar43);
        }
        if (bVar17) {
          return 0;
        }
      }
      pbVar47 = pbVar47 + 4;
    } while (pbVar47 != pbVar44);
  }
  uVar48 = *(uint *)((int64_t)arg1 + 0x34);
  uVar37 = *(uint *)(*this_ptr + 0x28) & 0x100000;
  if ((uVar37 != 0) &&
     (((*(uint *)(this_ptr + 0xb) & uVar48) == *(uint *)(this_ptr + 0xb) ||
      ((*(uint *)((int64_t)this_ptr + 0x5c) & uVar48) == *(uint *)((int64_t)this_ptr + 0x5c)))))
  {
    uVar48 = uVar48 | *(uint *)(this_ptr + 0xc);
  }
  if (uVar48 != 0) {
    lVar46 = 0;
    do {
      cVar34 = FUN_009df118();
      if (cVar34 != '\0') {
        *(void*)((int64_t)local_88 + lVar46) = 1;
      }
      lVar46 = lVar46 + 1;
    } while (lVar46 != 0x100);
    uVar37 = *(uint *)(*this_ptr + 0x28) & 0x100000;
  }
  uVar48 = *(uint *)(arg1 + 7);
  if ((uVar37 != 0) &&
     (((*(uint *)(this_ptr + 0xb) & uVar48) == *(uint *)(this_ptr + 0xb) ||
      ((*(uint *)((int64_t)this_ptr + 0x5c) & uVar48) == *(uint *)((int64_t)this_ptr + 0x5c)))))
  {
    uVar48 = uVar48 | *(uint *)(this_ptr + 0xc);
  }
  if (uVar48 != 0) {
    lVar46 = 0;
    do {
      cVar34 = FUN_009df118();
      if (cVar34 == '\0') {
        *(void*)((int64_t)local_88 + lVar46) = 1;
      }
      lVar46 = lVar46 + 1;
    } while (lVar46 != 0x100);
  }
  pbVar47 = (byte *)arg1[8];
  if (pbVar47 != (byte *)(arg1 + 9)) {
    local_a0 = (byte *)((uint64_t)&local_58 | 1);
    do {
      local_78 = (uint8_t  [16])0x0;
      local_68 = (byte *)0x0;
      FUN_009dedf4(pbVar47 + 0x1a,pbVar47 + 0x19);
      local_68 = local_48;
      bVar35 = local_58 >> 1;
      pvVar49 = local_50;
      if ((local_58 & 1) == 0) {
        pvVar49 = (void *)(uint64_t)bVar35;
      }
      if (pvVar49 == (void *)0x0) {
        if ((local_58 & 1) != 0) {
          operator_delete((void *)CONCAT71(uStack_57,local_58));
        }
        return 0;
      }
      local_90 = local_48;
      local_98 = local_48;
      if ((local_58 & 1) == 0) {
        local_98 = (byte *)((uint64_t)local_78 | 1);
      }
      lVar46 = 0;
      local_a8 = pbVar47;
      local_40 = (void *)CONCAT71(uStack_57,local_58);
      do {
        local_c0 = (byte)lVar46;
        local_bf[0] = 0;
        puVar42 = local_bf;
        FUN_009dedf4(puVar42,&local_c0);
        pvVar43 = (void *)CONCAT71((int7)((uint64_t)puVar42 >> 8),1);
        bVar36 = local_58 & 1;
        pvVar40 = local_50;
        if (bVar36 == 0) {
          pvVar40 = (void *)(uint64_t)(local_58 >> 1);
        }
        if (pvVar49 == pvVar40) {
          pbVar47 = local_a0;
          if (bVar36 != 0) {
            pbVar47 = local_48;
          }
          if (((uint64_t)local_40 & 1) == 0) {
            pvVar40 = (void *)0x0;
            do {
              pvVar43 = (void *)CONCAT71((int7)((uint64_t)pvVar43 >> 8),
                                         (local_78 + 1)[(int64_t)pvVar40]);
              if ((local_78 + 1)[(int64_t)pvVar40] != pbVar47[(int64_t)pvVar40])
              goto LAB_009dec87;
              pvVar40 = (void *)((int64_t)pvVar40 + 1);
            } while ((void *)(uint64_t)bVar35 != pvVar40);
          }
          else {
            iVar38 = _memcmp(pvVar43,pvVar49,param_3);
            if (iVar38 != 0) goto LAB_009dec87;
          }
          pvVar43 = (void *)CONCAT71((int7)((uint64_t)pvVar43 >> 8),1);
          *(void*)((int64_t)local_88 + lVar46) = 1;
          bVar36 = local_58 & 1;
        }
LAB_009dec87:
        if (bVar36 != 0) {
          operator_delete(pvVar43);
        }
        lVar46 = lVar46 + 1;
      } while (lVar46 != 0x100);
      pbVar32 = *(byte **)(local_a8 + 8);
      pbVar44 = local_a8;
      if (*(byte **)(local_a8 + 8) == (byte *)0x0) {
        pbVar47 = *(byte **)(local_a8 + 0x10);
        if (*(byte **)pbVar47 != local_a8) {
          pbVar44 = local_a8 + 0x10;
          do {
            lVar46 = *(int64_t *)pbVar44;
            pbVar47 = *(byte **)(lVar46 + 0x10);
            pbVar44 = (byte *)(lVar46 + 0x10);
          } while (*(int64_t *)pbVar47 != lVar46);
        }
      }
      else {
        do {
          pbVar47 = pbVar32;
          pbVar32 = *(byte **)pbVar47;
        } while (*(byte **)pbVar47 != (byte *)0x0);
      }
      if (((uint64_t)local_40 & 1) != 0) {
        operator_delete(pbVar44);
      }
    } while (pbVar47 != (byte *)(arg1 + 9));
  }
  bVar31 = UNK_023d4d9f;
  bVar30 = UNK_023d4d9e;
  bVar29 = UNK_023d4d9d;
  bVar28 = UNK_023d4d9c;
  bVar27 = UNK_023d4d9b;
  bVar26 = UNK_023d4d9a;
  bVar25 = UNK_023d4d99;
  bVar24 = UNK_023d4d98;
  bVar23 = UNK_023d4d97;
  bVar22 = UNK_023d4d96;
  bVar21 = UNK_023d4d95;
  bVar20 = UNK_023d4d94;
  bVar19 = UNK_023d4d93;
  bVar18 = UNK_023d4d92;
  bVar36 = UNK_023d4d91;
  bVar35 = g_023d4d90;
  if (local_33 != '\0') {
    lVar46 = 0x10;
    do {
      pcVar1 = (char *)(lVar39 + lVar46);
      cVar34 = pcVar1[1];
      cVar33 = pcVar1[2];
      cVar4 = pcVar1[3];
      cVar5 = pcVar1[4];
      cVar6 = pcVar1[5];
      cVar7 = pcVar1[6];
      cVar8 = pcVar1[7];
      cVar9 = pcVar1[8];
      cVar10 = pcVar1[9];
      cVar11 = pcVar1[10];
      cVar12 = pcVar1[0xb];
      cVar13 = pcVar1[0xc];
      cVar14 = pcVar1[0xd];
      cVar15 = pcVar1[0xe];
      cVar16 = pcVar1[0xf];
      pbVar47 = (byte *)(lVar39 + lVar46);
      *pbVar47 = -(*pcVar1 == '\0') & bVar35;
      pbVar47[1] = -(cVar34 == '\0') & bVar36;
      pbVar47[2] = -(cVar33 == '\0') & bVar18;
      pbVar47[3] = -(cVar4 == '\0') & bVar19;
      pbVar47[4] = -(cVar5 == '\0') & bVar20;
      pbVar47[5] = -(cVar6 == '\0') & bVar21;
      pbVar47[6] = -(cVar7 == '\0') & bVar22;
      pbVar47[7] = -(cVar8 == '\0') & bVar23;
      pbVar47[8] = -(cVar9 == '\0') & bVar24;
      pbVar47[9] = -(cVar10 == '\0') & bVar25;
      pbVar47[10] = -(cVar11 == '\0') & bVar26;
      pbVar47[0xb] = -(cVar12 == '\0') & bVar27;
      pbVar47[0xc] = -(cVar13 == '\0') & bVar28;
      pbVar47[0xd] = -(cVar14 == '\0') & bVar29;
      pbVar47[0xe] = -(cVar15 == '\0') & bVar30;
      pbVar47[0xf] = -(cVar16 == '\0') & bVar31;
      lVar46 = lVar46 + 0x10;
    } while (lVar46 != 0x110);
  }
  return lVar39;
}

