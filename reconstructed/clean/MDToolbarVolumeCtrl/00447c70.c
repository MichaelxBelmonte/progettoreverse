// Function: FUN_00447c70
// Address: 00447c70
// Size: 578 bytes
// Class: MDToolbarVolumeCtrl

void FUN_00447c70(void* param_1)

{
  int64_t lVar1;
  bool bVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t this_ptr;
  uint32_t uVar5;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_38;
  char local_30;
  
  FUN_00448850();
  if (local_30 == '\0') {
    if (local_38 == 0) goto LAB_00447cfd;
    FUN_00d50b00();
LAB_00447cc0:
    if (*(int64_t *)(this_ptr + 0x78) != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7d10();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011f2610();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_012a46e0();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x928))(uVar5);
    }
    bVar2 = false;
  }
  else {
    if (local_38 != 0) goto LAB_00447cc0;
LAB_00447cfd:
    bVar2 = true;
  }
  FUN_00448b60();
  lVar1 = *(int64_t *)(this_ptr + 0x88);
  lVar4 = lVar1;
  if (lVar1 == local_38) goto LAB_00447e85;
  lVar4 = local_38;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar4 = 0;
      goto LAB_00447e3e;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x88);
    *(int64_t *)(this_ptr + 0x88) = local_38;
  }
  else {
    local_30 = '\0';
LAB_00447e3e:
    *(int64_t *)(this_ptr + 0x88) = lVar4;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar4 = local_38;
  }
LAB_00447e85:
  if ((local_30 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}

