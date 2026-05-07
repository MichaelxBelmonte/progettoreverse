// Function: FUN_00caef90
// Address: 00caef90
// Size: 644 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00caef90(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  void *pvVar7;
  int64_t *this_ptr;
  int local_40;
  
  (**(code **)(*this_ptr + 0x470))();
  if (g_028a7308 != 0) {
    FUN_00d50b00();
    cVar2 = FUN_00d23d70();
    FUN_00d50b20();
    if (cVar2 != '\0') {
      FUN_00d50b00();
      FUN_00d23f50();
      FUN_00d50b20();
    }
  }
  if (this_ptr[0x12] != 0) {
    if (this_ptr[0x14] != 0) {
      iVar3 = FUN_00c8d630();
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          lVar5 = FUN_00c8df10();
          if (lVar5 != 0) {
            lVar1 = *(int64_t *)(lVar5 + 8);
            if (lVar1 != 0) {
              local_40 = -1;
              while( true ) {
                lVar6 = (int64_t)local_40;
                local_40 = local_40 + 1;
                if (*(int *)(lVar1 + 0xc) <= local_40) break;
                lVar6 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar6 * 8);
                if ((*(char *)(lVar6 + 0x39) != '\0') && (*(int64_t *)(lVar6 + 0x18) != 0)) {
                  pvVar7 = _pthread_getspecific((void*)*(int64_t *)(lVar1 + 0x10));
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  lVar6 = *(int64_t *)(lVar6 + 0x20);
                  if (lVar6 != 0) {
                    FUN_00d50b00();
                  }
                  FUN_00e8c420();
                  if (lVar6 != 0) {
                    FUN_00d50b20();
                  }
                }
              }
              FUN_00cc12b0();
              if (*(int64_t *)(lVar5 + 8) != 0) {
                FUN_00d50b20();
              }
            }
            FUN_00e83070();
          }
          iVar3 = iVar3 + 1;
          iVar4 = FUN_00c8d630();
        } while (iVar3 < iVar4);
      }
      FUN_00c8d5b0();
    }
    if (this_ptr[0x17] != 0) {
      FUN_00c8d5b0();
    }
  }
  FUN_00d50110();
  return;
}

