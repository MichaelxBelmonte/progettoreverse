// Function: FUN_00df1bf0
// Address: 00df1bf0
// Size: 899 bytes
// Class: GNFileType
// String references:
//   "GNFileType"

int64_t * FUN_00df1bf0(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int64_t lVar7;
  int64_t **pplVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar9;
  int64_t lVar10;
  int64_t *local_58;
  
  lVar7 = *param_2;
  if (lVar7 == 0) {
    *(void*)(this_ptr + 1) = 0;
    lVar7 = *arg1;
    if ((char)arg1[1] != '\0') {
      *this_ptr = lVar7;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(arg1 + 1) = 0;
      return this_ptr;
    }
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    if (0 < *(int *)(lVar7 + 0xc)) {
      lVar10 = 0;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(lVar7 + 0x10) + lVar10 * 8);
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_58 = plVar1;
        if ((g_027782e0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
          g_026d19f8 = FUN_00d4fe50();
          g_026d19e0 = "GNFileType";
          g_026d19e8 = 0x48;
          g_026d19f0 = FUN_00042280;
          g_026d1a00 = 0;
          ram_00000000026d1a08 = 0;
          g_026d1a10 = 0;
          ram_00000000026d1a18 = 0;
          g_026d1a20 = 0;
          ram_00000000026d1a28 = 0;
          g_026d1a30 = 0;
          ram_00000000026d1a38 = 0;
          g_026d1a40 = 0;
          ram_00000000026d1a48 = 0;
          g_026d1a50 = 0;
          ram_00000000026d1a58 = 0;
          g_026d1a60 = 0;
          ram_00000000026d1a68 = 0;
          g_026d1a70 = 0;
          ram_00000000026d1a78 = 0;
          g_026d1a80 = 0;
          ram_00000000026d1a88 = 0;
          g_026d1a90 = 0;
          ram_00000000026d1a98 = 0;
          g_026d1aa0 = 0;
          ___cxa_guard_release();
        }
        pplVar8 = (int64_t **)&g_02802688;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar5 = FUN_00e85ea0();
          pplVar8 = &local_58;
          if (cVar5 == '\0') {
            pplVar8 = (int64_t **)&g_02802688;
          }
        }
        plVar1 = local_58;
        if (*pplVar8 == (int64_t *)0x0) {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar5 = FUN_00d8f250();
          if (cVar5 != '\0') {
            FUN_00d8f1a0();
            if (plVar1 == (int64_t *)0x0) {
              return this_ptr;
            }
            FUN_00d50b20();
            bVar4 = false;
            goto LAB_00df1e30;
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
            goto LAB_00df1e25;
          }
          bVar3 = true;
        }
        else {
          lVar7 = local_58[5];
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          if (0 < *(int *)(lVar7 + 0xc)) {
            lVar9 = 0;
            do {
              lVar2 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + lVar9 * 8);
              if (lVar2 != 0) {
                FUN_00d50b00();
              }
              cVar5 = FUN_00d8f250();
              if (cVar5 != '\0') {
                FUN_00d8f1a0();
                if (lVar2 != 0) {
                  FUN_00d50b20();
                }
                bVar4 = false;
                break;
              }
              if (lVar2 != 0) {
                FUN_00d50b20();
              }
              lVar9 = lVar9 + 1;
            } while (lVar9 < *(int *)(lVar7 + 0xc));
          }
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if (bVar4) {
LAB_00df1e25:
            bVar4 = true;
            bVar3 = true;
          }
          else {
            bVar4 = false;
            bVar3 = false;
          }
          if (plVar1 != (int64_t *)0x0) {
LAB_00df1e30:
            bVar3 = bVar4;
            FUN_00d50b20();
          }
        }
        if (!bVar3) {
          return this_ptr;
        }
        lVar10 = lVar10 + 1;
        lVar7 = *param_2;
      } while (lVar10 < *(int *)(lVar7 + 0xc));
    }
    *(void*)(this_ptr + 1) = 0;
    lVar7 = *arg1;
    if ((char)arg1[1] != '\0') {
      *this_ptr = lVar7;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(arg1 + 1) = 0;
      return this_ptr;
    }
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
  }
  *this_ptr = lVar7;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

