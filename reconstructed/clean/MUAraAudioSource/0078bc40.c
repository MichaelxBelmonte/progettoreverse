// Function: FUN_0078bc40
// Address: 0078bc40
// Size: 1572 bytes
// Class: MUAraAudioSource
// === MUAraAudioSource properties ===
//   double          _cursorTime
//   double          _lastHostCursorTime
//   bool            _lastHostCursorTimeValid
//   double          _hostPlaybackPendingStopTime
//   bool            _controlsLocalPlayback
//   bool            _distributedLocalPlayback
//   double          _lastPendingHostCycleUpdateRequestTime
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_0078bc40(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t lVar5;
  char cVar6;
  void *pvVar7;
  int64_t lVar8;
  char *pcVar9;
  void* pVar10;
  char *pcVar11;
  int iVar12;
  int64_t *this_ptr;
  int iVar13;
  int iVar14;
  int64_t *local_d8;
  char local_d0;
  int64_t local_80;
  char local_78 [8];
  int64_t local_70;
  char local_68 [8];
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  char local_41;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01f27fe0();
  local_41 = (**(code **)(*local_d8 + 0x450))();
  if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_003b7950();
  if ((local_d0 == '\0') && (local_d8 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_0078b9c0();
  if (local_d0 == '\0') {
    if (local_d8 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_0078bd37;
    }
  }
  else if (local_d8 != (int64_t *)0x0) {
LAB_0078bd37:
    iVar13 = -1;
    do {
      iVar13 = iVar13 + 1;
      iVar1 = *(int *)((int64_t)local_d8 + 0xc);
      if (iVar1 <= iVar13) {
        FUN_000be170();
        goto LAB_0078c259;
      }
      lVar8 = *(int64_t *)(local_d8[2] + (int64_t)iVar13 * 8);
      FUN_004f9670();
      lVar4 = local_70;
      local_40[0] = local_68[0];
      pcVar11 = local_40;
      pcVar9 = local_68;
      if (local_68[0] == '\0') {
        pcVar9 = pcVar11;
      }
      *pcVar9 = '\0';
      if ((local_68[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      pVar10 = (void*)pcVar11;
      pvVar7 = _pthread_getspecific(pVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004fae50();
      lVar5 = local_70;
      if (local_68[0] == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68[0] = '\0';
      }
      cVar6 = (**(code **)(*local_d8 + 0x50))();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_68[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (cVar6 == '\0') {
        if (local_41 != '\0') {
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6160();
          lVar8 = local_70;
          if (local_68[0] == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
              if ((local_68[0] != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_0078bf9e;
            }
          }
          else if (local_70 != 0) {
LAB_0078bf9e:
            local_68[0] = '\0';
            local_70 = 0;
            local_60 = lVar8;
            local_58 = 0xffffffff;
            local_50 = 0;
            local_58._4_4_ = 0;
            while( true ) {
              if (local_58._4_4_ != 0) {
                if (local_58._4_4_ < 1) {
                  iVar12 = -local_58._4_4_;
                }
                else {
                  iVar12 = (int)local_58 - local_58._4_4_;
                  local_58 = CONCAT44(local_58._4_4_,iVar12);
                  FUN_00d23690();
                  local_50 = local_50 + local_58._4_4_;
                  iVar12 = 0;
                }
                local_58 = CONCAT44(iVar12,(int)local_58);
              }
              lVar8 = (int64_t)(int)local_58;
              iVar14 = (int)local_58 + 1;
              local_58 = CONCAT44(local_58._4_4_,iVar14);
              iVar12 = *(int *)(local_60 + 0xc);
              if (iVar12 <= iVar14) goto LAB_0078c1e3;
              local_70 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + 8 + lVar8 * 8);
              FUN_004f9670();
              local_38[0] = local_78[0];
              pcVar11 = local_38;
              pcVar9 = local_78;
              if (local_78[0] == '\0') {
                pcVar9 = pcVar11;
              }
              *pcVar9 = '\0';
              if ((local_78[0] != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific((void*)pcVar11);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_004fae50();
              if (local_78[0] == '\0') {
                if (local_80 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_78[0] = '\0';
              }
              cVar6 = (**(code **)(*local_d8 + 0x50))();
              if (local_80 != 0) {
                FUN_00d50b20();
              }
              if ((local_78[0] != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              lVar8 = local_70;
              if (cVar6 != '\0') break;
              if ((local_38[0] != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
            }
            *(void*)(this_ptr + 1) = 0;
            if (local_68[0] == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
              *this_ptr = lVar8;
              *(void*)(this_ptr + 1) = 1;
            }
            else {
              *this_ptr = local_70;
              *(void*)(this_ptr + 1) = 1;
              local_68[0] = '\0';
            }
            if ((local_38[0] != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
LAB_0078c1e3:
            FUN_000be170();
            FUN_00d50b20();
            if (iVar14 < iVar12) goto LAB_0078bf03;
          }
        }
        bVar3 = true;
        bVar2 = true;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        *this_ptr = lVar8;
        *(void*)(this_ptr + 1) = 1;
LAB_0078bf03:
        bVar3 = false;
        bVar2 = false;
      }
      if ((local_40[0] != '\0') && (bVar2 = bVar3, lVar4 != 0)) {
        FUN_00d50b20();
      }
    } while (bVar2);
    FUN_000be170();
LAB_0078c259:
    FUN_00d50b20();
    if (iVar13 < iVar1) goto LAB_0078c27d;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_0078c27d:
  if (local_d8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

