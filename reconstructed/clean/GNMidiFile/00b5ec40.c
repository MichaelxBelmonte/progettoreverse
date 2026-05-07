// Function: FUN_00b5ec40
// Address: 00b5ec40
// Size: 576 bytes
// Class: GNMidiFile
// === GNMidiFile properties ===
//   GNMidiFileTimeBase _timeBase


double FUN_00b5ec40(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t this_ptr;
  double dVar5;
  double local_38;
  double local_30;
  
  lVar1 = *(int64_t *)(this_ptr + 0x58);
  if (lVar1 == 0) {
    local_30 = 0.0;
  }
  else {
    FUN_00d50b00();
    if (*(int *)(lVar1 + 0xc) < 1) {
      local_30 = 0.0;
    }
    else {
      local_30 = 0.0;
      lVar4 = 0;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar4 * 8);
        local_38 = 0.0;
        if (*(int64_t *)(lVar2 + 0x10) != 0) {
          local_38 = (double)FUN_00b5de00();
        }
        if ((*(int64_t *)(lVar2 + 0x40) != 0) && (dVar5 = (double)FUN_00b5dec0(), local_38 < dVar5)
           ) {
          local_38 = (double)FUN_00b5dec0();
        }
        if ((*(int64_t *)(lVar2 + 0x48) != 0) && (dVar5 = (double)FUN_00b5dec0(), local_38 < dVar5)
           ) {
          local_38 = (double)FUN_00b5dec0();
        }
        if (local_30 < local_38) {
          if (*(int64_t *)(lVar2 + 0x10) == 0) {
            local_30 = 0.0;
            lVar3 = *(int64_t *)(lVar2 + 0x40);
          }
          else {
            local_30 = (double)FUN_00b5de00();
            lVar3 = *(int64_t *)(lVar2 + 0x40);
          }
          if ((lVar3 != 0) && (dVar5 = (double)FUN_00b5dec0(), local_30 < dVar5)) {
            local_30 = (double)FUN_00b5dec0();
          }
          if ((*(int64_t *)(lVar2 + 0x48) != 0) &&
             (dVar5 = (double)FUN_00b5dec0(), local_30 < dVar5)) {
            local_30 = (double)FUN_00b5dec0();
          }
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_00b67020();
  }
  dVar5 = (double)FUN_00b60820();
  if (local_30 < dVar5) {
    local_30 = (double)FUN_00b60820();
  }
  dVar5 = (double)FUN_00b608b0();
  if (local_30 < dVar5) {
    local_30 = (double)FUN_00b608b0();
  }
  if ((*(int64_t *)(this_ptr + 0x30) != 0) && (dVar5 = (double)FUN_00b60940(), local_30 < dVar5))
  {
    local_30 = (double)FUN_00b60940();
  }
  if ((*(int64_t *)(this_ptr + 0x38) != 0) && (dVar5 = (double)FUN_00b5dec0(), local_30 < dVar5))
  {
    local_30 = (double)FUN_00b5dec0();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return local_30;
}

