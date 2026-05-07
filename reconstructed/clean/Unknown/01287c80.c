// Function: FUN_01287c80
// Address: 01287c80
// Size: 1766 bytes
// Class: Unknown

void FUN_01287c80(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint uVar8;
  void* pVar9;
  int64_t *plVar10;
  uint64_t arg1;
  int64_t *this_ptr;
  uint64_t uVar11;
  uint uVar12;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  uint64_t local_68;
  uint32_t local_60;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  FUN_00243390();
  lVar5 = local_80;
  lVar3 = *this_ptr;
  if (lVar3 == local_80) {
    if (((char)this_ptr[1] != '\0') || (local_80 == 0)) goto LAB_01287d4f;
    if (local_78 == '\0') {
      FUN_00d50b00();
      goto LAB_01287d47;
    }
LAB_01287d09:
    *(void*)(this_ptr + 1) = 1;
    local_78 = '\0';
  }
  else {
    lVar1 = this_ptr[1];
    if (local_78 != '\0') {
      *this_ptr = local_80;
      if (((char)lVar1 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01287d09;
    }
    if (local_80 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar5;
    if (((char)lVar1 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_01287d47:
    *(void*)(this_ptr + 1) = 1;
LAB_01287d4f:
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar3 = *this_ptr;
  uVar12 = *(uint *)(lVar3 + 0xc);
  uVar11 = (uint64_t)uVar12;
  if (0 < (int)uVar12) {
    do {
      uVar12 = uVar12 - 1;
      lVar3 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + (uint64_t)uVar12 * 8);
      uVar8 = uVar12;
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(uVar8);
      if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
        if (*(int64_t *)(lVar3 + 200) == 0) goto LAB_01287dec;
LAB_01287e2f:
        FUN_00d50b00();
        FUN_00d50b20();
      }
      else {
        if (*(int64_t *)
             (*(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 200) !=
            0) goto LAB_01287e2f;
LAB_01287dec:
        local_78 = '\0';
        local_80 = lVar3;
        FUN_00d23f50();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((int64_t)uVar11 < 2) break;
      uVar11 = uVar11 - 1;
      lVar3 = *this_ptr;
    } while( true );
  }
  FUN_01271180();
  lVar3 = local_80;
  if (local_78 == '\0') {
    if (local_80 == 0) goto LAB_01288347;
    FUN_00d50b00();
  }
  else if (local_80 == 0) goto LAB_01288347;
  local_78 = '\0';
  local_80 = 0;
  local_70 = lVar3;
  local_60 = 0;
  local_68 = 0;
  if (0 < *(int *)(lVar3 + 0xc)) {
    lVar5 = 0;
    do {
      local_80 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + lVar5 * 8);
      FUN_00d23340();
      lVar1 = local_40;
      local_50 = CONCAT71(local_50._1_7_,local_38[0]);
      plVar10 = &local_50;
      plVar6 = (int64_t *)local_38;
      if (local_38[0] == '\0') {
        plVar6 = plVar10;
      }
      *(char *)plVar6 = '\0';
      if ((local_38[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      pVar9 = (void*)plVar10;
      if (((char)local_50 == '\0') && (lVar1 != 0)) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(pVar9);
      if ((pvVar4 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
        lVar7 = *(int64_t *)(lVar1 + 0xa0);
      }
      else {
        lVar7 = *(int64_t *)
                 (*(int64_t *)(lVar1 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8) + 0xa0
                 );
      }
      if (lVar7 != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        pvVar4 = _pthread_getspecific(pVar9);
        if ((pvVar4 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
          lVar7 = *(int64_t *)(lVar1 + 0xa0);
        }
        else {
          lVar7 = *(int64_t *)
                   (*(int64_t *)(lVar1 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8) +
                   0xa0);
        }
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        pvVar4 = _pthread_getspecific(pVar9);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff00();
        lVar2 = local_50;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_40 = lVar2;
        local_38[0] = '\0';
        FUN_00d21140();
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
      }
      pvVar4 = _pthread_getspecific(pVar9);
      if ((pvVar4 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
        if (*(int64_t *)(lVar1 + 0x100) == 0) goto LAB_0128811e;
LAB_0128813f:
        pvVar4 = _pthread_getspecific(pVar9);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e8920();
      }
      else {
        if (*(int64_t *)
             (*(int64_t *)(lVar1 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8) + 0x100)
            != 0) goto LAB_0128813f;
LAB_0128811e:
        local_48 = '\0';
        local_50 = 0;
      }
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      lVar7 = local_40;
      if (local_38[0] == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        pvVar4 = _pthread_getspecific(pVar9);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01270af0();
        lVar7 = local_40;
        local_88 = 0;
        if ((local_38[0] == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        local_90 = lVar7;
        local_88 = '\x01';
        FUN_012a4a40(arg1,&local_90);
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar5 = lVar5 + 1;
      local_68 = CONCAT44(local_68._4_4_,(int)lVar5);
    } while ((int)lVar5 < *(int *)(lVar3 + 0xc));
  }
  FUN_01a02020();
  FUN_00d50b20();
LAB_01288347:
  FUN_0152eef0();
  return;
}

