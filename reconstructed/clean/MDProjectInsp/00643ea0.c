// Function: FUN_00643ea0
// Address: 00643ea0
// Size: 759 bytes
// Class: MDProjectInsp

int FUN_00643ea0(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  void *pvVar6;
  int64_t *this_ptr;
  uint64_t uVar7;
  int64_t *local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00637870();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00643ef2;
    }
  }
  else if (local_40 != 0) {
LAB_00643ef2:
    iVar5 = FUN_006e18e0();
    if (iVar5 == -1) {
      iVar5 = -1;
    }
    else {
      FUN_01f27fe0();
      cVar3 = (**(code **)(*local_78 + 0x450))();
      lVar1 = g_02708e90;
      if (cVar3 == '\0') {
        local_48 = lVar2;
        if (g_02708e90 != 0) {
          FUN_00d50b00();
        }
        FUN_00e7d6f0();
        param_1 = 0xaaaaaaab;
        uVar7 = FUN_0071a120();
        lVar2 = local_40;
        if ((((local_38 == '\0') && (local_40 != 0)) && (uVar7 = FUN_00d50b00(), local_38 != '\0'))
           && (local_40 != 0)) {
          uVar7 = FUN_00d50b20();
        }
        bVar4 = (byte)lVar2;
        local_58 = lVar1;
        local_50 = '\0';
        FUN_000175c0(uVar7,&local_58);
        lVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          local_38 = '\0';
          local_40 = lVar2;
          bVar4 = FUN_00c70bc0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
        bVar4 = lVar2 != 0 & bVar4;
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        bVar4 = 0;
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar4 != 0) {
        (**(code **)(*this_ptr + 0x5e8))();
        if (local_40 == 0) {
          cVar3 = '\0';
        }
        else {
          (**(code **)(*this_ptr + 0x5e8))();
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_004a1190();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          iVar5 = -1;
        }
      }
    }
    FUN_00d50b20();
    return iVar5;
  }
  return -1;
}

