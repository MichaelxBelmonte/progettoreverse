// Function: FUN_00d51ef0
// Address: 00d51ef0
// Size: 1374 bytes
// Class: MDNotificationObserver
// === MDNotificationObserver properties ===
//   bool            _didChooseQuantization
//   bool            _customValue
//   bool            _showsReplaceRanges
//   bool            _isEditingDetection
//   float           _trackHeaderWidth
//   GNDoubleRange   _startTimeRange
//   GNDoubleRange   _destTimeRange
//   float           _animateZoomToTimeProgress
//   bool            _updateViewPositionDisabled
//   GNInt           _selectedIndex
//   GNInt           _fixedCount
//   bool            _showsEditorBar
//   double          _stopTime
//   double          _startTime


void FUN_00d51ef0(void)

{
  char cVar1;
  uint64_t uVar2;
  char *pcVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar4;
  int64_t local_110;
  char local_108 [16];
  uint64_t local_f8;
  uint32_t local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_60;
  char local_58;
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  (**(code **)(*this_ptr + 0x360))();
  FUN_00e86210();
  FUN_00c820a0();
  pcVar3 = local_38;
  if (local_108[0] != '\0') {
    pcVar3 = local_108;
  }
  local_38[0] = local_108[0];
  *pcVar3 = '\0';
  if ((local_108[0] != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (local_110 != 0) {
    local_108[0] = '\0';
    local_f0 = 0;
    local_f8 = 0;
    if (0 < *(int *)(local_110 + 0xc)) {
      lVar4 = 0;
      do {
        local_e8 = *(int64_t *)(*(int64_t *)(local_110 + 0x10) + lVar4 * 8);
        local_e0 = '\0';
        cVar1 = (**(code **)(*this_ptr + 0x2b8))();
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if (cVar1 != '\0') {
          uVar2 = FUN_00d77bd0();
          if ((int)((uint64_t)uVar2 >> 0x20) < 2) {
            if ((int)uVar2 == 0) {
              FUN_00d74120();
              if (local_58 == '\0') {
                if (local_60 != 0) {
                  FUN_00e31530();
                }
              }
              else {
                local_58 = '\0';
              }
              (**(code **)(*this_ptr + 0x88))();
              if (local_40 == '\0') {
                if (local_48 != 0) {
                  FUN_00e31530();
                }
              }
              else {
                local_40 = '\0';
              }
              if (local_60 != 0) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              if (local_48 != 0) {
                if (local_48 == *arg1) {
                  local_b0 = '\0';
                  local_b8 = 0;
                  FUN_00d74120();
                  if (local_40 == '\0') {
                    if (local_48 != 0) {
                      FUN_00e31530();
                    }
                  }
                  else {
                    local_40 = '\0';
                  }
                  (**(code **)(*this_ptr + 0x80))();
                  if (local_48 != 0) {
                    FUN_00d50b20();
                  }
                  if ((local_40 != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_b0 != '\0') && (local_b8 != 0)) {
                    FUN_00d50b20();
                  }
                }
                FUN_00d50b20();
              }
            }
          }
          else {
            FUN_00d74120();
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00e31530();
              }
            }
            else {
              local_58 = '\0';
            }
            (**(code **)(*this_ptr + 0x88))();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00e31530();
              }
            }
            else {
              local_40 = '\0';
            }
            if (local_60 != 0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if (local_48 != 0) {
              local_d8 = *arg1;
              local_d0 = '\0';
              cVar1 = FUN_00d23d70();
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
              if (cVar1 != '\0') {
                local_c8 = *arg1;
                local_c0 = '\0';
                FUN_00d74120();
                if (local_40 == '\0') {
                  if (local_48 != 0) {
                    FUN_00e31530();
                  }
                }
                else {
                  local_40 = '\0';
                }
                (**(code **)(*this_ptr + 200))();
                if (local_48 != 0) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_c0 != '\0') && (local_c8 != 0)) {
                  FUN_00d50b20();
                }
              }
              FUN_00d50b20();
            }
          }
        }
        lVar4 = lVar4 + 1;
        local_f8 = CONCAT44(local_f8._4_4_,(int)lVar4);
      } while ((int)lVar4 < *(int *)(local_110 + 0xc));
    }
    FUN_00559a70();
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}

