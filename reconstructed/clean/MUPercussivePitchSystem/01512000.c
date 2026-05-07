// Function: FUN_01512000
// Address: 01512000
// Size: 1446 bytes
// Class: MUPercussivePitchSystem

uint64_t FUN_01512000(void* param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  void* pVar9;
  char *pcVar10;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar11;
  char cVar12;
  uint64_t uVar13;
  undefined7 uVar14;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88 [8];
  int64_t local_80;
  uint64_t local_78;
  uint32_t local_70;
  int64_t local_68;
  char local_60;
  uint64_t local_58;
  int64_t local_50;
  char local_48;
  char local_38 [8];
  
  lVar6 = *arg1;
  if (lVar6 != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      lVar6 = *arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    if (*(int64_t *)(lVar6 + 0x88) == 0) {
      lVar5 = 0;
      do {
        lVar7 = *(int64_t *)(lVar6 + 0x50);
        if (lVar7 == 0) {
          bVar1 = true;
          goto LAB_01512080;
        }
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          lVar7 = *(int64_t *)(lVar6 + 0x50);
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
          }
        }
        lVar6 = lVar7;
      } while (*(int64_t *)(lVar7 + 0x88) == 0);
      lVar5 = *(int64_t *)(lVar7 + 0x88);
    }
    else {
      lVar5 = *(int64_t *)(lVar6 + 0x88);
    }
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    bVar1 = false;
LAB_01512080:
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar2 = FUN_018847d0();
    if (!bVar1 && lVar5 != 0) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x88) == 0) {
      lVar6 = 0;
      do {
        lVar5 = *(int64_t *)(this_ptr + 0x50);
        if (lVar5 == 0) {
          uVar14 = (undefined7)((uint64_t)this_ptr >> 8);
          bVar1 = true;
          goto LAB_015120f3;
        }
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          lVar5 = *(int64_t *)(this_ptr + 0x50);
          lVar7 = FUN_00e8b990();
          if (lVar7 != 0) {
            lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
        }
        this_ptr = lVar5;
      } while (*(int64_t *)(lVar5 + 0x88) == 0);
      lVar6 = *(int64_t *)(lVar5 + 0x88);
    }
    else {
      lVar6 = *(int64_t *)(this_ptr + 0x88);
    }
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    bVar1 = false;
    uVar14 = 0;
LAB_015120f3:
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar3 = FUN_018847d0();
    if (!bVar1 && lVar6 != 0) {
      FUN_00d50b20();
    }
    if (uVar2 != 0) {
      uVar13 = CONCAT71(uVar14,1);
      if (uVar3 == 0) goto LAB_01512155;
      if ((uVar3 & 0xfffffffe) == 2) goto LAB_01512152;
      if ((uVar2 & 0xfffffffe) == 2) goto LAB_01512155;
      FUN_0150d890();
      if ((local_88[0] != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (local_90 == 0) goto LAB_01512155;
      FUN_0150d890();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505930();
      FUN_00d23310();
      pVar9 = CONCAT31((int3)(param_1 >> 8),local_88[0]);
      pcVar10 = local_38;
      if (local_88[0] != '\0') {
        pcVar10 = local_88;
      }
      local_38[0] = local_88[0];
      *pcVar10 = '\0';
      if ((local_88[0] != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7210();
      lVar6 = local_50;
      if (local_48 == '\0') {
        if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar6 == 0) {
        cVar12 = '\0';
        lVar5 = 0;
LAB_01512585:
        bVar1 = true;
      }
      else {
        local_88[0] = '\0';
        local_80 = lVar6;
        local_70 = 0;
        local_78 = 0;
        if (*(int *)(lVar6 + 0xc) < 1) {
          bVar1 = false;
          cVar12 = '\0';
          lVar5 = 0;
        }
        else {
          iVar11 = 0;
          lVar5 = 0;
          local_58 = 0;
          do {
            pvVar4 = _pthread_getspecific(pVar9);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264240();
            lVar7 = local_50;
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
                if ((local_48 != '\0') && (local_50 != 0)) {
                  FUN_00d50b20();
                }
                goto LAB_015124e7;
              }
            }
            else if (local_50 != 0) {
LAB_015124e7:
              if (lVar5 == 0) {
                uVar8 = FUN_00d50b00();
                local_58 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
                lVar5 = lVar7;
              }
              FUN_00d50b20();
              if (lVar7 != lVar5) {
                bVar1 = true;
                cVar12 = (char)local_58;
                goto LAB_01512571;
              }
            }
            iVar11 = iVar11 + 1;
            local_78 = CONCAT44(local_78._4_4_,iVar11);
          } while (iVar11 < *(int *)(lVar6 + 0xc));
          bVar1 = false;
          cVar12 = (char)local_58;
        }
LAB_01512571:
        FUN_001159b0();
        if (!bVar1) goto LAB_01512585;
        bVar1 = false;
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((cVar12 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if (bVar1) goto LAB_01512155;
    }
  }
LAB_01512152:
  uVar13 = 0;
LAB_01512155:
  return uVar13 & 0xffffffff;
}

