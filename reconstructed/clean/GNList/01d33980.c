// Function: FUN_01d33980
// Address: 01d33980
// Size: 1345 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_01d33980(uint64_t param_1,byte param_2)

{
  int64_t lVar1;
  char cVar2;
  uint32_t uVar3;
  uint uVar4;
  int iVar5;
  undefined7 uVar7;
  uint64_t uVar6;
  int64_t *this_ptr;
  int iVar8;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  lVar1 = g_02728af8;
  if (g_02728af8 != 0) {
    FUN_00d50b00();
  }
  uVar3 = (**(code **)(*local_40 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar7 = (undefined7)((uint64_t)local_40 >> 8);
  if ((char)uVar3 == '\0') {
    FUN_01cae990();
    lVar1 = g_02729610;
    if (g_02729610 != 0) {
      FUN_00d50b00();
    }
    uVar3 = (**(code **)(*local_40 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar3 != '\0') {
      uVar6 = CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
      if (param_2 != 0) {
        (**(code **)(*this_ptr + 0x500))();
      }
      goto LAB_01d33afe;
    }
    FUN_01cae990();
    lVar1 = g_026de880;
    if (g_026de880 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_40 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      FUN_01cae990();
      lVar1 = g_026de890;
      if (g_026de890 != 0) {
        FUN_00d50b00();
      }
      cVar2 = (**(code **)(*local_40 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        uVar4 = (**(code **)(*this_ptr + 0x5d8))(param_1,param_2);
        uVar6 = (uint64_t)uVar4;
        goto LAB_01d33afe;
      }
      FUN_01cae990();
      lVar1 = g_02728b20;
      if (g_02728b20 != 0) {
        FUN_00d50b00();
      }
      cVar2 = (**(code **)(*local_40 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        FUN_01cae990();
        lVar1 = g_02800130;
        if (g_02800130 != 0) {
          FUN_00d50b00();
        }
        cVar2 = (**(code **)(*local_40 + 0x50))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          uVar4 = FUN_01d827c0(param_1,param_2);
          uVar6 = (uint64_t)uVar4;
        }
        else {
          (**(code **)(*this_ptr + 0x480))();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar6 = CONCAT71(uVar7,local_40 != (int64_t *)0x0);
          if ((local_40 != (int64_t *)0x0) && (param_2 != 0)) {
            iVar5 = FUN_01caea40();
            if (iVar5 < 0) {
              iVar8 = 1;
              if (1 < -iVar5) {
                iVar8 = -iVar5;
              }
              do {
                (**(code **)(*this_ptr + 0x520))();
                uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
            else {
              uVar6 = CONCAT71(uVar7,1);
              for (; iVar5 != 0; iVar5 = iVar5 + -1) {
                (**(code **)(*this_ptr + 0x518))();
              }
            }
          }
        }
        goto LAB_01d33afe;
      }
      (**(code **)(*this_ptr + 0x468))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 == (int64_t *)0x0) goto LAB_01d33d7d;
      uVar4 = (**(code **)(*this_ptr + 0x478))();
      uVar6 = (uint64_t)uVar4;
      if (((char)uVar4 == '\0') || (param_2 == 0)) goto LAB_01d33afe;
      (**(code **)(*this_ptr + 0x510))();
    }
    else {
      (**(code **)(*this_ptr + 0x480))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 == (int64_t *)0x0) {
LAB_01d33d7d:
        uVar6 = 0;
        goto LAB_01d33afe;
      }
      (**(code **)(*this_ptr + 0x480))();
      uVar4 = FUN_00db3860();
      uVar6 = (uint64_t)uVar4;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((byte)uVar4 & param_2) == 0) goto LAB_01d33afe;
      (**(code **)(*this_ptr + 0x518))();
    }
  }
  else {
    cVar2 = (**(code **)(*this_ptr + 0x478))();
    if (cVar2 == '\0') {
      (**(code **)(*this_ptr + 0x468))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar6 = CONCAT71(uVar7,local_40 == (int64_t *)0x0);
      if (local_40 != (int64_t *)0x0) goto LAB_01d33afe;
    }
    else {
      uVar6 = CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
    }
    if (param_2 == 0) goto LAB_01d33afe;
    (**(code **)(*this_ptr + 0x4f8))();
  }
  uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
LAB_01d33afe:
  return uVar6 & 0xffffffff;
}

