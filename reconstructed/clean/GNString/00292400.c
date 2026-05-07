// Function: FUN_00292400
// Address: 00292400
// Size: 1774 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00292400(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  char cVar5;
  int64_t lVar6;
  void *pvVar7;
  void* pVar8;
  int64_t **pplVar9;
  int64_t lVar10;
  int iVar11;
  int64_t *this_ptr;
  int64_t local_c0;
  char local_b8;
  int local_a8;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  char local_38;
  
  if (*this_ptr != 0) {
    FUN_01d5e2b0();
    if (local_b8 == '\0') {
      if (local_c0 == 0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_c0 == 0) {
      return;
    }
    local_a8 = -1;
    while (local_a8 = local_a8 + 1, local_a8 < *(int *)(local_c0 + 0xc)) {
      FUN_01d64cb0();
      plVar1 = local_68;
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar2 = g_026fb7f0;
      if (plVar1 == (int64_t *)0x0) {
        if (g_026fb7f0 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_01d65460();
        plVar1 = local_68;
        if (local_60 == '\0') {
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        cVar4 = (**(code **)(*plVar2 + 0x50))();
        plVar2 = g_026fb818;
        cVar5 = '\x01';
        if (cVar4 == '\0') {
          if (g_026fb818 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          FUN_01d65460();
          plVar3 = local_40;
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          cVar5 = (**(code **)(*plVar2 + 0x50))();
          if (plVar3 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (cVar5 != '\0') {
          FUN_01d66da0();
          lVar6 = g_02726cf0;
          if (g_02726cf0 != 0) {
            FUN_00d50b00();
          }
          FUN_000175c0();
          plVar1 = local_68;
          if ((g_026fd0c0 == '\0') && (iVar11 = ___cxa_guard_acquire(), iVar11 != 0)) {
            g_026d5e58 = FUN_00d4fe50();
            g_026d5e40 = "GNString";
            g_026d5e48 = 0x40;
            g_026d5e50 = FUN_0005d920;
            g_026d5e60 = 0;
            ram_00000000026d5e68 = 0;
            g_026d5e70 = 0;
            ram_00000000026d5e78 = 0;
            g_026d5e80 = 0;
            ram_00000000026d5e88 = 0;
            g_026d5e90 = 0;
            ram_00000000026d5e98 = 0;
            g_026d5ea0 = 0;
            ram_00000000026d5ea8 = 0;
            g_026d5eb0 = 0;
            ram_00000000026d5eb8 = 0;
            g_026d5ec0 = 0;
            ram_00000000026d5ec8 = 0;
            g_026d5ed0 = 0;
            ram_00000000026d5ed8 = 0;
            g_026d5ee0 = 0;
            ram_00000000026d5ee8 = 0;
            g_026d5ef0 = 0;
            ram_00000000026d5ef8 = 0;
            g_026d5f00 = 0;
            ___cxa_guard_release();
          }
          pplVar9 = (int64_t **)&g_02802688;
          if (plVar1 != (int64_t *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar4 = FUN_00e85ea0();
            pplVar9 = &local_68;
            if (cVar4 == '\0') {
              pplVar9 = (int64_t **)&g_02802688;
            }
          }
          plVar1 = *pplVar9;
          if (*(char *)(pplVar9 + 1) == '\0') {
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(pplVar9 + 1) = 0;
          }
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_0141b540();
          plVar2 = local_68;
          if (local_60 == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
              if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_00292859;
            }
          }
          else if (local_68 != (int64_t *)0x0) {
LAB_00292859:
            local_60 = '\0';
            local_68 = (int64_t *)0x0;
            local_58 = plVar2;
            local_50 = 0xffffffff;
            local_48 = 0;
            while( true ) {
              lVar6 = (int64_t)(int)local_50;
              iVar11 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar11);
              if (*(int *)((int64_t)local_58 + 0xc) <= iVar11) break;
              lVar10 = local_58[2];
              local_68 = *(int64_t **)(lVar10 + 8 + lVar6 * 8);
              pvVar7 = _pthread_getspecific((void*)lVar10);
              pVar8 = (void*)lVar10;
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0141b660();
              cVar4 = (**(code **)(*local_40 + 0x50))();
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 != '\0') {
                pvVar7 = _pthread_getspecific(pVar8);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0141b690();
                plVar2 = local_40;
                if (local_38 == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                FUN_01d64eb0();
                if (plVar2 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                break;
              }
              if (local_50._4_4_ != 0) {
                if (local_50._4_4_ < 1) {
                  iVar11 = -local_50._4_4_;
                }
                else {
                  local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
                  FUN_00d23690();
                  local_48 = local_48 + local_50._4_4_;
                  iVar11 = 0;
                }
                local_50 = CONCAT44(iVar11,(int)local_50);
              }
            }
            FUN_002a08f0();
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_01d64cb0();
        plVar1 = local_68;
        if (local_60 == '\0') {
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_00292400();
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_002a0a30();
    FUN_00d50b20();
  }
  return;
}

