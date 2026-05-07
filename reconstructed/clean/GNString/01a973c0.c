// Function: FUN_01a973c0
// Address: 01a973c0
// Size: 1748 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01a973c0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  void *pvVar7;
  uint64_t uVar8;
  int64_t this_ptr;
  uint64_t uVar9;
  uint uVar10;
  int64_t lVar11;
  bool bVar12;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  uint32_t local_64;
  int64_t *local_60;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar3 = local_48;
  FUN_01a5a220();
  FUN_01a58dc0();
  local_60 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == (int64_t *)0x0) {
    return;
  }
  uVar5 = FUN_019b43a0();
  plVar1 = local_60;
  if (*(char *)(this_ptr + 0x40) == '\0') {
    while (*(int *)(*(int64_t *)(this_ptr + 0x38) + 0xc) != 0) {
      FUN_00d23340();
      local_38[0] = local_40[0];
      pcVar6 = local_40;
      if (local_40[0] == '\0') {
        pcVar6 = local_38;
      }
      *pcVar6 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_88 = 0;
      local_80 = '\0';
      local_78 = 0;
      local_70 = '\0';
      FUN_01a81ae0(2,&local_78);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23340();
      local_38[0] = local_40[0];
      pcVar6 = local_40;
      if (local_40[0] == '\0') {
        pcVar6 = local_38;
      }
      *pcVar6 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_48 + 0x478))();
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      FUN_00d23740();
    }
  }
  else {
    (**(code **)(*local_60 + 0xa60))();
    (**(code **)(*plVar1 + 0x9b8))();
    if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
        (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar11 = *(int64_t *)(this_ptr + 0x38);
    uVar10 = *(uint *)(lVar11 + 0xc);
    uVar9 = (uint64_t)uVar10;
    uVar8 = ((uint64_t)uVar5 ^ 1) & 0xff;
    local_64 = (uint32_t)uVar8;
    if (0 < (int)uVar10) {
      do {
        uVar10 = uVar10 - 1;
        plVar1 = *(int64_t **)(*(int64_t *)(lVar11 + 0x10) + (uint64_t)uVar10 * 8);
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar1 + 0x928))();
        if (local_40[0] == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01a974ed;
          }
          bVar12 = true;
LAB_01a975b0:
          local_c8 = 0;
          local_c0 = '\0';
          uVar8 = 2;
          FUN_01a81ae0(2,&local_c8);
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(**(int64_t **)
                         (*(int64_t *)(*(int64_t *)(this_ptr + 0x38) + 0x10) +
                         (uint64_t)uVar10 * 8) + 0x478))();
          FUN_00d23620();
          if (!bVar12) goto LAB_01a9765c;
        }
        else {
LAB_01a974ed:
          bVar12 = local_48 == (int64_t *)0x0;
          if ((local_48 == (int64_t *)0x0) || (local_48 == (int64_t *)0x0)) goto LAB_01a975b0;
          local_40[0] = '\0';
          cVar4 = FUN_00d24090();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar4 == '\0') {
            bVar12 = false;
            goto LAB_01a975b0;
          }
          FUN_01a87bd0();
          FUN_0198a800();
LAB_01a9765c:
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if ((int64_t)uVar9 < 2) break;
        uVar9 = uVar9 - 1;
        lVar11 = *(int64_t *)(this_ptr + 0x38);
      } while( true );
    }
    plVar1 = local_60;
    (**(code **)(*local_60 + 0xa58))();
    (**(code **)(*plVar1 + 0x9b8))();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 != (int64_t *)0x0) {
      if (*(int *)((int64_t)local_48 + 0xc) < 1) {
        bVar12 = false;
      }
      else {
        lVar11 = 0;
        bVar12 = false;
        do {
          lVar2 = *(int64_t *)(plVar3[2] + lVar11 * 8);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_01a97ec0();
          if (local_48 == (int64_t *)0x0) {
            pvVar7 = _pthread_getspecific((void*)uVar8);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar4 = FUN_01263cf0();
            if (cVar4 == '\0') {
              local_48 = (int64_t *)FUN_00e8fc40();
              FUN_0086a5a0();
              (**(code **)(*local_48 + 0x18))();
              local_b0 = '\0';
              local_a8 = 0;
              local_a0 = '\0';
              uVar8 = 2;
              local_b8 = lVar2;
              FUN_01a81ae0(2,&local_a8);
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_b0 != '\0') && (local_b8 != 0)) {
                FUN_00d50b20();
              }
              local_90 = '\0';
              local_98 = local_48;
              (**(code **)(*local_60 + 0x450))();
              if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_01a87bd0();
              FUN_0198a800();
              local_40[0] = '\0';
              FUN_00d21140();
              if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              bVar12 = true;
              FUN_00d50b20();
            }
          }
          else if (local_40[0] != '\0') {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)((int64_t)plVar3 + 0xc));
      }
      FUN_00d50b20();
      if (bVar12) {
        (**(code **)(*local_60 + 0xb48))();
      }
    }
  }
  FUN_00d50b20();
  return;
}

