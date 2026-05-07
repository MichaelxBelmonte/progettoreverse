// Function: FUN_009ddc0e
// Address: 009ddc0e
// Size: 2588 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


int64_t FUN_009ddc0e(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int64_t *plVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  uint8_t uVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  int iVar13;
  int64_t lVar14;
  void*puVar15;
  int64_t *plVar16;
  int64_t lVar17;
  void *pvVar18;
  void *pvVar19;
  byte bVar20;
  int64_t *plVar21;
  void *pvVar22;
  void *pvVar23;
  void*puVar24;
  int64_t *plVar25;
  char *pcVar26;
  int64_t *arg1;
  void*puVar27;
  int64_t *this_ptr;
  int64_t *plVar28;
  char *pcVar29;
  char *pcVar30;
  uint32_t uVar31;
  uint64_t local_98;
  void *pvStack_90;
  void *local_88;
  char local_7e;
  char local_7d;
  char local_7c;
  char local_7b;
  char local_7a;
  char local_79;
  uint64_t local_78;
  void *pvStack_70;
  void *local_68;
  char local_51;
  uint8_t local_50;
  char cStack_4f;
  uint8_t uStack_4e;
  uint16_t uStack_4d;
  undefined3 uStack_4b;
  undefined5 local_48;
  undefined3 uStack_43;
  void *local_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  lVar14 = FUN_009d8a9c(param_1,0x28);
  plVar25 = (int64_t *)*arg1;
  plVar28 = arg1 + 1;
  iVar13 = 0;
  plVar5 = plVar25;
  while (plVar5 != plVar28) {
    plVar21 = (int64_t *)plVar5[1];
    if ((int64_t *)plVar5[1] == (int64_t *)0x0) {
      plVar16 = (int64_t *)plVar5[2];
      if ((int64_t *)*plVar16 != plVar5) {
        do {
          plVar5 = (int64_t *)plVar5[2];
          plVar16 = (int64_t *)plVar5[2];
        } while ((int64_t *)*plVar16 != plVar5);
      }
    }
    else {
      do {
        plVar16 = plVar21;
        plVar21 = (int64_t *)*plVar16;
      } while ((int64_t *)*plVar16 != (int64_t *)0x0);
    }
    iVar13 = iVar13 + 1;
    plVar5 = plVar16;
  }
  *(int *)(lVar14 + 0x10) = iVar13;
  pcVar29 = (char *)arg1[3];
  pcVar30 = (char *)arg1[4];
  *(uint *)(lVar14 + 0x14) =
       (uint)((uint64_t)((int64_t)pcVar30 - (int64_t)pcVar29) >> 2) & 0x7fffffff;
  plVar21 = (int64_t *)arg1[8];
  plVar5 = arg1 + 9;
  if (plVar21 == plVar5) {
    iVar13 = 0;
  }
  else {
    iVar13 = 0;
    do {
      plVar16 = (int64_t *)plVar21[1];
      if ((int64_t *)plVar21[1] == (int64_t *)0x0) {
        plVar8 = (int64_t *)plVar21[2];
        if (*(int64_t **)plVar21[2] != plVar21) {
          do {
            plVar21 = (int64_t *)plVar21[2];
            plVar8 = (int64_t *)plVar21[2];
          } while (*(int64_t **)plVar21[2] != plVar21);
        }
      }
      else {
        do {
          plVar21 = (int64_t *)*plVar16;
          plVar8 = plVar16;
          plVar16 = plVar21;
        } while (plVar21 != (int64_t *)0x0);
      }
      plVar21 = plVar8;
      iVar13 = iVar13 + 1;
    } while (plVar21 != plVar5);
  }
  *(int *)(lVar14 + 0x18) = iVar13;
  uVar1 = *(uint *)((int64_t)arg1 + 0x34);
  *(uint *)(lVar14 + 0x1c) = uVar1;
  uVar2 = *(uint *)(arg1 + 7);
  *(uint *)(lVar14 + 0x20) = uVar2;
  lVar6 = *this_ptr;
  if ((*(byte *)(lVar6 + 0x2a) & 0x10) == 0) goto LAB_009dddab;
  uVar3 = *(uint *)(this_ptr + 0xb);
  if ((uVar3 & uVar1) == uVar3) {
LAB_009ddd79:
    *(uint *)(lVar14 + 0x1c) = uVar1 | *(uint *)(this_ptr + 0xc);
  }
  else {
    uVar4 = *(uint *)((int64_t)this_ptr + 0x5c);
    param_3 = (uint64_t)uVar4;
    if ((uVar4 & uVar1) == uVar4) goto LAB_009ddd79;
  }
  if (((uVar3 & uVar2) == uVar3) ||
     ((*(uint *)((int64_t)this_ptr + 0x5c) & uVar2) == *(uint *)((int64_t)this_ptr + 0x5c))) {
    *(uint *)(lVar14 + 0x20) = uVar2 | *(uint *)(this_ptr + 0xc);
  }
LAB_009dddab:
  *(char *)(lVar14 + 0x24) = (char)arg1[6];
  *(byte *)(lVar14 + 0x25) = *(byte *)((int64_t)arg1 + 0x31) ^ 1;
  lVar6 = *(int64_t *)(lVar6 + 0x160);
  if (plVar25 != plVar28) {
    do {
      puVar15 = (void*)FUN_009dedb6();
      uVar9 = *(void*)((int64_t)plVar25 + 0x19);
      if ((char)this_ptr[3] != '\0') {
        uVar9 = (**(code **)(**(int64_t **)(*(int64_t *)this_ptr[1] + 8) + 0x28))();
      }
      *puVar15 = uVar9;
      if (*(char *)((int64_t)plVar25 + 0x19) != '\0') {
        cVar10 = *(char *)((int64_t)plVar25 + 0x1a);
        if (cVar10 == '\0') {
          puVar15 = puVar15 + 1;
        }
        else {
          if ((char)this_ptr[3] != '\0') {
            cVar10 = (**(code **)(**(int64_t **)(*(int64_t *)this_ptr[1] + 8) + 0x28))();
          }
          puVar15[1] = cVar10;
          puVar15 = puVar15 + 2;
        }
      }
      *puVar15 = 0;
      plVar21 = (int64_t *)plVar25[1];
      if ((int64_t *)plVar25[1] == (int64_t *)0x0) {
        plVar16 = (int64_t *)plVar25[2];
        if ((int64_t *)*plVar16 != plVar25) {
          do {
            plVar25 = (int64_t *)plVar25[2];
            plVar16 = (int64_t *)plVar25[2];
          } while ((int64_t *)*plVar16 != plVar25);
        }
      }
      else {
        do {
          plVar16 = plVar21;
          plVar21 = (int64_t *)*plVar16;
        } while ((int64_t *)*plVar16 != (int64_t *)0x0);
      }
      plVar25 = plVar16;
    } while (plVar16 != plVar28);
    pcVar29 = (char *)arg1[3];
    pcVar30 = (char *)arg1[4];
  }
  if (pcVar29 != pcVar30) {
    puVar24 = (void*)((uint64_t)&local_78 | 3);
    puVar27 = (void*)((uint64_t)&local_98 | 3);
    pcVar29 = pcVar29 + 3;
    do {
      cVar10 = pcVar29[-3];
      cVar11 = pcVar29[-2];
      if (((char)this_ptr[3] == '\0') ||
         (cVar10 = (**(code **)(**(int64_t **)(*(int64_t *)this_ptr[1] + 8) + 0x28))(),
         (char)this_ptr[3] == '\0')) {
        cVar12 = pcVar29[-1];
        local_51 = *pcVar29;
      }
      else {
        cVar11 = (**(code **)(**(int64_t **)(*(int64_t *)this_ptr[1] + 8) + 0x28))();
        cVar12 = pcVar29[-1];
        local_51 = *pcVar29;
        if (((char)this_ptr[3] != '\0') &&
           (cVar12 = (**(code **)(**(int64_t **)(*(int64_t *)this_ptr[1] + 8) + 0x28))(),
           (char)this_ptr[3] != '\0')) {
          local_51 = (**(code **)(**(int64_t **)(*(int64_t *)this_ptr[1] + 8) + 0x28))();
        }
      }
      local_78 = 0;
      pvStack_70 = (void *)0x0;
      local_68 = (void *)0x0;
      local_88 = (void *)0x0;
      local_98 = 0;
      pvStack_90 = (void *)0x0;
      if ((*(byte *)(*this_ptr + 0x2a) & 0x20) == 0) {
        if (cVar11 == '\0') {
          local_78 = (uint64_t)CONCAT11(cVar10,2);
          *(uint64_t *)((int64_t)puVar24 + 5) = CONCAT53(local_48,uStack_4b);
          *puVar24 = CONCAT35(uStack_4b,
                              CONCAT23(uStack_4d,CONCAT12(uStack_4e,CONCAT11(cStack_4f,local_50))));
          local_98._0_1_ = 0;
        }
        else {
          uVar31 = std::string::insert(this_ptr,(int)cVar10);
          std::string::insert(uVar31,(int)cVar11);
        }
        cVar10 = local_51;
        pvVar18 = (void *)((uint64_t)&local_98 | 1);
        if (((byte)local_98 & 1) != 0) {
          pvVar18 = local_88;
        }
        if (local_51 == '\0') {
          std::string::insert(pvVar18,(int)cVar12);
        }
        else {
          uVar31 = std::string::insert(pvVar18,(int)cVar12);
          std::string::insert(uVar31,(int)cVar10);
        }
      }
      else {
        local_7c = '\0';
        local_7a = local_51;
        local_79 = '\0';
        pcVar26 = &local_7c;
        if (cVar11 == '\0') {
          pcVar26 = &local_7d;
        }
        local_7e = cVar10;
        local_7d = cVar11;
        local_7b = cVar12;
        FUN_009d76b8(0,&local_7e);
        if ((local_78 & 1) != 0) {
          operator_delete(pcVar26);
        }
        local_68 = local_40;
        local_78 = CONCAT35(uStack_4b,
                            CONCAT23(uStack_4d,CONCAT12(uStack_4e,CONCAT11(cStack_4f,local_50))));
        pvStack_70 = (void *)CONCAT35(uStack_43,local_48);
        pcVar26 = &local_79;
        if (local_7a == '\0') {
          pcVar26 = &local_7a;
        }
        FUN_009d76b8(pcVar26,&local_7b);
        if ((local_98 & 1) != 0) {
          operator_delete(pcVar26);
        }
        local_88 = local_40;
        local_98 = CONCAT35(uStack_4b,
                            CONCAT23(uStack_4d,CONCAT12(uStack_4e,CONCAT11(cStack_4f,local_50))));
        pvStack_90 = (void *)CONCAT35(uStack_43,local_48);
        pvVar18 = pvStack_70;
        if ((local_78 & 1) == 0) {
          pvVar18 = (void *)(local_78 >> 1 & 0x7f);
        }
        if (pvVar18 == (void *)0x0) {
          if ((local_78 & 1) != 0) {
            operator_delete((void *)0x0);
          }
          local_78 = CONCAT53(local_78._3_5_,2);
          *(uint64_t *)((int64_t)puVar24 + 5) = CONCAT53(local_48,uStack_4b);
          *puVar24 = CONCAT35(uStack_4b,
                              CONCAT23(uStack_4d,CONCAT12(uStack_4e,CONCAT11(cStack_4f,local_50))));
        }
        pvVar18 = pvStack_90;
        if ((local_98 & 1) == 0) {
          pvVar18 = (void *)(local_98 >> 1 & 0x7f);
        }
        if (pvVar18 == (void *)0x0) {
          if ((local_98 & 1) != 0) {
            operator_delete((void *)0x0);
          }
          local_98 = CONCAT53(local_98._3_5_,2);
          pvVar18 = (void *)CONCAT53(local_48,uStack_4b);
          *(void **)((int64_t)puVar27 + 5) = pvVar18;
          *puVar27 = CONCAT35(uStack_4b,
                              CONCAT23(uStack_4d,CONCAT12(uStack_4e,CONCAT11(cStack_4f,local_50))));
        }
      }
      uVar7 = local_98;
      bVar20 = (byte)local_78;
      pvVar19 = pvStack_70;
      if ((local_78 & 1) == 0) {
        pvVar19 = (void *)(uint64_t)((byte)local_78 >> 1);
      }
      pvVar23 = pvStack_90;
      if ((local_98 & 1) == 0) {
        pvVar23 = (void *)(local_98 >> 1 & 0x7f);
      }
      pvVar22 = pvVar23;
      if (pvVar19 < pvVar23) {
        pvVar22 = pvVar19;
      }
      if (pvVar22 == (void *)0x0) {
LAB_009de2f1:
        if (pvVar23 < pvVar19) {
LAB_009de5d6:
          if ((uVar7 & 1) != 0) {
            operator_delete(pvVar18);
            bVar20 = (byte)local_78;
          }
          if ((bVar20 & 1) != 0) goto LAB_009de5f2;
          goto LAB_009de5fb;
        }
      }
      else {
        iVar13 = _memcmp(pvVar18,pvVar22,(size_t)param_3);
        if (iVar13 == 0) goto LAB_009de2f1;
        if (iVar13 < 0) goto LAB_009de5d6;
      }
      lVar17 = FUN_009dedb6();
      pvVar18 = (void *)(uint64_t)((byte)local_78 >> 1);
      bVar20 = (byte)local_78 & 1;
      pvVar19 = pvStack_70;
      if ((local_78 & 1) == 0) {
        pvVar19 = pvVar18;
      }
      if (pvVar19 != (void *)0x0) {
        _memmove((void *)(uint64_t)bVar20,pvVar19,(size_t)param_3);
        bVar20 = (byte)local_78 & 1;
        pvVar18 = (void *)(uint64_t)((byte)local_78 >> 1);
      }
      if (bVar20 != 0) {
        pvVar18 = pvStack_70;
      }
      *(void*)(lVar17 + (int64_t)pvVar18) = 0;
      pvVar18 = pvStack_70;
      if ((local_78 & 1) == 0) {
        pvVar18 = (void *)(local_78 >> 1 & 0x7f);
      }
      pvVar19 = (void *)(uint64_t)((byte)local_98 >> 1);
      pvVar22 = (void *)(uint64_t)((byte)local_98 & 1);
      pvVar23 = pvStack_90;
      if ((local_98 & 1) == 0) {
        pvVar23 = pvVar19;
      }
      if (pvVar23 != (void *)0x0) {
        _memmove(pvVar22,pvVar23,(size_t)param_3);
        pvVar22 = (void *)(uint64_t)((byte)local_98 & 1);
        pvVar19 = (void *)(uint64_t)((byte)local_98 >> 1);
      }
      if ((char)pvVar22 != '\0') {
        pvVar19 = pvStack_90;
      }
      *(void*)((int64_t)pvVar18 + lVar17 + 1 + (int64_t)pvVar19) = 0;
      if ((local_98 & 1) != 0) {
        operator_delete(pvVar22);
      }
      if ((local_78 & 1) != 0) {
        operator_delete(pvVar22);
      }
      pcVar26 = pcVar29 + 1;
      pcVar29 = pcVar29 + 4;
    } while (pcVar26 != pcVar30);
  }
  plVar25 = (int64_t *)arg1[8];
  do {
    if (plVar25 == plVar5) {
      lVar14 = (lVar14 - lVar6) + *(int64_t *)(*this_ptr + 0x160);
      this_ptr[2] = lVar14;
LAB_009de5fd:
      if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
        return lVar14;
      }
                          ___stack_chk_fail();
    }
    local_78 = 0;
    pvStack_70 = (void *)0x0;
    local_68 = (void *)0x0;
    if (*(char *)((int64_t)plVar25 + 0x1a) == '\0') {
      puVar15 = (void*)((int64_t)plVar25 + 0x1a);
      FUN_009dedf4();
    }
    else {
      local_50 = *(void*)((int64_t)plVar25 + 0x19);
      uStack_4e = 0;
      puVar15 = &uStack_4e;
      cStack_4f = *(char *)((int64_t)plVar25 + 0x1a);
      FUN_009dedf4(puVar15,&local_50);
    }
    if ((local_78 & 1) != 0) {
      operator_delete(puVar15);
    }
    local_68 = local_88;
    pvStack_70 = pvStack_90;
    local_78 = local_98;
    pvVar18 = pvStack_90;
    if ((local_98 & 1) == 0) {
      pvVar18 = (void *)(local_98 >> 1 & 0x7f);
    }
    if (pvVar18 == (void *)0x0) {
      pvVar18 = pvStack_90;
      if ((local_98 & 1) != 0) {
LAB_009de5f2:
        operator_delete(pvVar18);
      }
LAB_009de5fb:
      lVar14 = 0;
      goto LAB_009de5fd;
    }
    lVar17 = FUN_009dedb6();
    pvVar18 = (void *)(uint64_t)((byte)local_78 >> 1);
    pvVar23 = (void *)(uint64_t)((byte)local_78 & 1);
    pvVar19 = pvStack_70;
    if ((local_78 & 1) == 0) {
      pvVar19 = pvVar18;
    }
    if (pvVar19 != (void *)0x0) {
      _memmove(pvVar23,pvVar19,(size_t)param_3);
      pvVar23 = (void *)(uint64_t)((byte)local_78 & 1);
      pvVar18 = (void *)(uint64_t)((byte)local_78 >> 1);
    }
    if ((char)pvVar23 != '\0') {
      pvVar18 = pvStack_70;
    }
    *(void*)(lVar17 + (int64_t)pvVar18) = 0;
    plVar28 = (int64_t *)plVar25[1];
    if ((int64_t *)plVar25[1] == (int64_t *)0x0) {
      plVar21 = (int64_t *)plVar25[2];
      if ((int64_t *)*plVar21 != plVar25) {
        do {
          plVar25 = (int64_t *)plVar25[2];
          plVar21 = (int64_t *)plVar25[2];
        } while ((int64_t *)*plVar21 != plVar25);
      }
    }
    else {
      do {
        plVar21 = plVar28;
        plVar28 = (int64_t *)*plVar21;
      } while ((int64_t *)*plVar21 != (int64_t *)0x0);
    }
    plVar25 = plVar21;
    if ((local_78 & 1) != 0) {
      operator_delete(pvVar23);
    }
  } while( true );
}

