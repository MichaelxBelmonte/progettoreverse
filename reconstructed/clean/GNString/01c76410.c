// Function: FUN_01c76410
// Address: 01c76410
// Size: 867 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01c76410(void* param_1,int param_2)

{
  char cVar1;
  int extraout_var;
  void *pvVar2;
  uint64_t uVar3;
  uint uVar4;
  int64_t this_ptr;
  int64_t lVar5;
  int64_t local_48;
  char local_40;
  
  if (param_2 != 0) {
    lVar5 = *(int64_t *)(this_ptr + 0x188);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    FUN_016cbba0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    FUN_01c45b80();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    lVar5 = *(int64_t *)(this_ptr + 0x270);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    FUN_00d235a0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if (*(int *)(this_ptr + 0x268) == 1) {
      FUN_01caea20();
      FUN_00e7bcc0();
      uVar4 = *(uint *)(local_48 + 0xc);
      if (0 < (int)uVar4) {
        lVar5 = (uint64_t)uVar4 + 1;
        do {
          param_1 = (void*)*(void*)(local_48 + 0x10);
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar3 = FUN_0190a000();
          if (((uVar3 >> 0x20 != 0) && (extraout_var != 0)) &&
             (cVar1 = FUN_00e7c000(), cVar1 != '\0')) {
            FUN_00d23620();
          }
          lVar5 = lVar5 + -1;
        } while (1 < lVar5);
        uVar4 = *(uint *)(local_48 + 0xc);
      }
      if (uVar4 != 0) {
        lVar5 = *(int64_t *)(this_ptr + 0x188);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016fab40();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01c62c70();
    if (*(int64_t *)(this_ptr + 0x188) != 0) {
      FUN_00d50b00();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c1150();
      FUN_00d50b20();
    }
    if (*(int *)(this_ptr + 0x268) != 0) {
      *(void*)(this_ptr + 0x268) = 0;
      (**(code **)(**(int64_t **)(this_ptr + 0x158) + 0x478))();
      if (*(int64_t *)(this_ptr + 0x158) != 0) {
        *(void*)(this_ptr + 0x158) = 0;
        FUN_00d50b20();
      }
      if (*(int64_t *)(this_ptr + 0x270) != 0) {
        *(void*)(this_ptr + 0x270) = 0;
        FUN_00d50b20();
      }
      FUN_01e436c0();
      FUN_01c4d670();
    }
    if (local_48 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return 1;
}

