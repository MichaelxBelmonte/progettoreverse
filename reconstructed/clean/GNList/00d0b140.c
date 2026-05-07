// Function: FUN_00d0b140
// Address: 00d0b140
// Size: 2493 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNString"
//   "GNDictionary"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d0b140(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  char *pcVar5;
  int64_t lVar6;
  int64_t **pplVar7;
  int iVar8;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar9;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar10;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  uint local_64;
  int64_t *local_60;
  char local_58 [8];
  int64_t *local_50;
  uint64_t local_48;
  int local_40;
  char local_38 [8];
  
  if ((*arg1 != 0) && (lVar1 = *(int64_t *)(*arg1 + 0x10), 0 < *(int *)(lVar1 + 0xc))) {
    lVar9 = 0;
    local_64 = 0;
    do {
      lVar6 = g_02781680;
      plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar9 * 8);
      if (g_02781680 != 0) {
        FUN_00d50b00();
      }
      cVar4 = FUN_00d90870();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      plVar3 = g_027f37d8;
      if (cVar4 != '\0') {
        if (g_027f37d8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        cVar4 = (**(code **)(*plVar2 + 0x50))();
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        lVar6 = g_0277c878;
        if (cVar4 == '\0') {
          if (g_0277c878 != 0) {
            FUN_00d50b00();
          }
          cVar4 = (**(code **)(*plVar2 + 0x50))();
          uVar10 = extraout_XMM0_Da;
          if (lVar6 != 0) {
            uVar10 = FUN_00d50b20();
          }
          if (cVar4 == '\0') {
            local_98 = '\0';
            local_a0 = plVar2;
            (**(code **)(*(int64_t *)*arg1 + 0x88))();
            plVar2 = local_60;
            local_38[0] = local_58[0] != '\0';
            local_80 = local_60;
            pcVar5 = local_38;
            if ((bool)local_38[0]) {
              pcVar5 = local_58;
            }
            *pcVar5 = '\0';
            if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar2 != (int64_t *)0x0) {
              if ((g_026fdd40 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
                g_026cd0e8 = FUN_00d4fe50();
                g_026cd0d0 = "GNDictionary";
                g_026cd0d8 = 0x28;
                g_026cd0e0 = FUN_00022d20;
                g_026cd0f0 = 0;
                ram_00000000026cd0f8 = 0;
                g_026cd100 = 0;
                g_026cd178 = 0;
                ram_00000000026cd180 = 0;
                g_026cd188 = 0;
                g_026cd18a = 6;
                g_026cd108 = 0;
                ram_00000000026cd110 = 0;
                g_026cd118 = 0;
                ram_00000000026cd120 = 0;
                g_026cd128 = 0;
                ram_00000000026cd130 = 0;
                g_026cd138 = 0;
                ram_00000000026cd140 = 0;
                g_026cd148 = 0;
                ram_00000000026cd150 = 0;
                g_026cd158 = 0;
                ram_00000000026cd160 = 0;
                g_026cd168 = 0;
                ram_00000000026cd170 = 0;
                g_026cd193 = 0;
                g_026cd18b = 0;
                ___cxa_guard_release();
              }
              (**(code **)(*plVar2 + 0x360))();
              cVar4 = FUN_00e85ea0();
              pplVar7 = (int64_t **)&g_02802688;
              if (cVar4 != '\0') {
                if ((g_026fd0c0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
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
                cVar4 = FUN_00e8db60();
                pplVar7 = &local_80;
                if (cVar4 == '\0') {
                  pplVar7 = (int64_t **)&g_02802688;
                }
              }
              plVar3 = local_80;
              plVar2 = g_027f37d8;
              if (*pplVar7 == (int64_t *)0x0) {
                if ((g_027048b0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
                  g_026cd478 = FUN_00d4fe50();
                  g_026cd460 = "GNList";
                  g_026cd468 = 0x20;
                  g_026cd470 = FUN_00018210;
                  g_026cd480 = 0;
                  ram_00000000026cd488 = 0;
                  g_026cd490 = 0;
                  g_026cd508 = 0;
                  ram_00000000026cd510 = 0;
                  g_026cd518 = 0;
                  g_026cd51a = 6;
                  g_026cd498 = 0;
                  ram_00000000026cd4a0 = 0;
                  g_026cd4a8 = 0;
                  ram_00000000026cd4b0 = 0;
                  g_026cd4b8 = 0;
                  ram_00000000026cd4c0 = 0;
                  g_026cd4c8 = 0;
                  ram_00000000026cd4d0 = 0;
                  g_026cd4d8 = 0;
                  ram_00000000026cd4e0 = 0;
                  g_026cd4e8 = 0;
                  ram_00000000026cd4f0 = 0;
                  g_026cd4f8 = 0;
                  ram_00000000026cd500 = 0;
                  g_026cd523 = 0;
                  g_026cd51b = 0;
                  ___cxa_guard_release();
                }
                pplVar7 = (int64_t **)&g_02802688;
                if (plVar3 != (int64_t *)0x0) {
                  (**(code **)(*plVar3 + 0x360))();
                  cVar4 = FUN_00e85ea0();
                  pplVar7 = &local_80;
                  if (cVar4 == '\0') {
                    pplVar7 = (int64_t **)&g_02802688;
                  }
                }
                if (*pplVar7 != (int64_t *)0x0) {
                  local_58[0] = '\0';
                  local_60 = (int64_t *)0x0;
                  local_50 = *pplVar7;
                  local_48 = 0xffffffff;
                  local_40 = 0;
                  local_48._4_4_ = 0;
                  while( true ) {
                    if (local_48._4_4_ != 0) {
                      if (local_48._4_4_ < 1) {
                        iVar8 = -local_48._4_4_;
                      }
                      else {
                        iVar8 = (int)local_48 - local_48._4_4_;
                        local_48 = CONCAT44(local_48._4_4_,iVar8);
                        FUN_00d23690();
                        local_40 = local_40 + local_48._4_4_;
                        iVar8 = 0;
                      }
                      local_48 = CONCAT44(iVar8,(int)local_48);
                    }
                    lVar6 = (int64_t)(int)local_48;
                    iVar8 = (int)local_48 + 1;
                    local_48 = CONCAT44(local_48._4_4_,iVar8);
                    if (*(int *)((int64_t)local_50 + 0xc) <= iVar8) break;
                    plVar2 = *(int64_t **)(local_50[2] + 8 + lVar6 * 8);
                    local_60 = plVar2;
                    local_78 = plVar2;
                    if ((g_026fdd40 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
                      g_026cd0e8 = FUN_00d4fe50();
                      g_026cd0d0 = "GNDictionary";
                      g_026cd0d8 = 0x28;
                      g_026cd0e0 = FUN_00022d20;
                      g_026cd0f0 = 0;
                      ram_00000000026cd0f8 = 0;
                      g_026cd100 = 0;
                      g_026cd178 = 0;
                      ram_00000000026cd180 = 0;
                      g_026cd188 = 0;
                      g_026cd18a = 6;
                      g_026cd108 = 0;
                      ram_00000000026cd110 = 0;
                      g_026cd118 = 0;
                      ram_00000000026cd120 = 0;
                      g_026cd128 = 0;
                      ram_00000000026cd130 = 0;
                      g_026cd138 = 0;
                      ram_00000000026cd140 = 0;
                      g_026cd148 = 0;
                      ram_00000000026cd150 = 0;
                      g_026cd158 = 0;
                      ram_00000000026cd160 = 0;
                      g_026cd168 = 0;
                      ram_00000000026cd170 = 0;
                      g_026cd193 = 0;
                      g_026cd18b = 0;
                      ___cxa_guard_release();
                    }
                    pplVar7 = (int64_t **)&g_02802688;
                    if (plVar2 != (int64_t *)0x0) {
                      (**(code **)(*plVar2 + 0x360))();
                      cVar4 = FUN_00e85ea0();
                      pplVar7 = (int64_t **)&g_02802688;
                      if (cVar4 != '\0') {
                        if ((g_026fd0c0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0))
                        {
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
                        cVar4 = FUN_00e8db60();
                        pplVar7 = &local_78;
                        if (cVar4 == '\0') {
                          pplVar7 = (int64_t **)&g_02802688;
                        }
                      }
                    }
                    plVar2 = g_027f37d8;
                    if (*pplVar7 != (int64_t *)0x0) {
                      if (g_027f37d8 != (int64_t *)0x0) {
                        FUN_00d50b00();
                      }
                      local_78 = plVar2;
                      local_70 = '\0';
                      cVar4 = FUN_00c9ff50();
                      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (plVar2 != (int64_t *)0x0) {
                        FUN_00d50b20();
                      }
                      if (cVar4 != '\0') {
                        FUN_00d0b140();
                      }
                    }
                  }
                  FUN_00d11cb0();
                }
              }
              else {
                if (g_027f37d8 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                local_60 = plVar2;
                local_58[0] = '\0';
                cVar4 = FUN_00c9ff50();
                if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar2 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if (cVar4 != '\0') {
                  FUN_00d0b140();
                }
              }
            }
            if ((local_38[0] != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_b8 = '\0';
            local_c0 = plVar2;
            (**(code **)(*(int64_t *)*arg1 + 0x88))(uVar10,&local_c0);
            plVar2 = local_60;
            local_78 = (int64_t *)CONCAT71(local_78._1_7_,local_58[0]);
            pplVar7 = (int64_t **)local_58;
            if (local_58[0] == '\0') {
              pplVar7 = &local_78;
            }
            *(char *)pplVar7 = '\0';
            if ((local_58[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar2 != (int64_t *)0x0) {
              if (*(int64_t *)(this_ptr + 0x80) != 0) {
                local_b0 = plVar2;
                local_a8 = '\0';
                cVar4 = FUN_00d7a850();
                if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                local_64 = local_64 & 0xff;
                if (cVar4 == '\0') {
                  local_64 = 1;
                }
              }
              if ((char)local_78 != '\0') {
                FUN_00d50b20();
              }
            }
          }
        }
      }
      lVar6 = g_0277c878;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(lVar1 + 0xc));
    if ((local_64 & 1) != 0) {
      if (g_0277c878 != 0) {
        FUN_00d50b00();
      }
      local_60 = (int64_t *)lVar6;
      local_58[0] = '\0';
      FUN_00ca13a0();
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

