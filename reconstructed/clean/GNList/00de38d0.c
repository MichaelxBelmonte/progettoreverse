// Function: FUN_00de38d0
// Address: 00de38d0
// Size: 912 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00de38d0(void)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  void*puVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t local_a0;
  int64_t local_58;
  char local_50;
  int64_t *local_38;
  char local_30;
  
  FUN_00de4120();
  uVar5 = FUN_00d8cbc0();
  iVar1 = *(int *)(arg1 + 0x18);
  *(int *)(arg1 + 0x18) = iVar1 + 1;
  uVar4 = (ushort)uVar5;
  switch(uVar5 - 0x22 & 0xffff) {
  case 0:
  case 5:
    FUN_00de4610(iVar1,uVar5 & 0xffff);
    if ((local_30 == '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00de52e0();
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
    goto switchD_00de3923_caseD_1;
  case 6:
    FUN_00de4910();
    *(void*)(this_ptr + 1) = 0;
    if (local_30 == '\0') {
      if (local_38 == (int64_t *)0x0) {
        local_38 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
      }
    }
    *this_ptr = local_38;
    *(void*)(this_ptr + 1) = 1;
    break;
  case 0x1a:
    FUN_00de5030();
    break;
  default:
    if (uVar4 == 0x7b) {
      FUN_00de4f70();
      return;
    }
switchD_00de3923_caseD_1:
    if ((((ushort)((uVar4 & 0xffdf) - 0x41) < 0x1a) || ((ushort)(uVar4 - 0x30) < 10)) ||
       (((ushort)(uVar5 - 0x24) < 0x3c &&
        ((0x800000000400e01U >> ((uint64_t)(uVar5 - 0x24 & 0xffff) & 0x3f) & 1) != 0)))) {
      *(int *)(arg1 + 0x18) = iVar1;
      FUN_00de4720();
      if (local_30 == '\0') {
        if (local_38 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_00de3a63;
        }
      }
      else if (local_38 != (int64_t *)0x0) {
LAB_00de3a63:
        lVar2 = g_027841e8;
        if (g_027841e8 != 0) {
          FUN_00d50b00();
        }
        cVar3 = FUN_00d90dc0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          puVar6 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar6 = &g_02575d80;
          (*g_02575d98)();
          cVar3 = FUN_00d8ca50();
          if (cVar3 == '\0') {
            FUN_00d498d0();
            if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            FUN_00ddb860();
            cVar3 = (**(code **)(*local_38 + 0x3f8))();
            if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_58 != 0) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if ((cVar3 == '\0') || ((int)local_a0 == local_a0)) {
              FUN_00d46080();
            }
            else {
              FUN_00d46090();
            }
          }
          else {
            FUN_00d8d7b0();
            FUN_00d460a0();
          }
          *this_ptr = puVar6;
          *(void*)(this_ptr + 1) = 1;
          FUN_00d50b20();
          return;
        }
        FUN_00de52e0();
        FUN_00d50b20();
        return;
      }
    }
    else {
      *(int *)(arg1 + 0x18) = iVar1;
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  return;
}

