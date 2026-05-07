// Function: FUN_01786580
// Address: 01786580
// Size: 819 bytes
// Class: MUBarSignature
// String references:
//   "%I"

void FUN_01786580(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t local_40;
  char local_38;
  
  lVar3 = g_027cee10;
  if (*param_2 != 0) {
    if (g_027cee10 != 0) {
      FUN_00d50b00();
    }
    FUN_00d91bc0();
    lVar8 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar8 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0xc) == 0) {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
      }
      else {
        FUN_00d8d560();
        FUN_0123ff10();
        if (*(int *)(lVar8 + 0xc) < 2) {
          iVar5 = FUN_00d8c7a0();
          if ((1 < iVar5) && (*(int *)(arg1 + 0xc) == 0)) {
            iVar5 = FUN_00d8c7a0();
            uVar6 = FUN_0123fcf0();
            uVar9 = (uint64_t)uVar6;
            if (0 < (int)uVar6) {
              do {
                uVar6 = (uint)uVar9;
                FUN_00d8cb40();
                if ((local_38 == '\0') && (local_40 != 0)) {
                  FUN_00d50b00();
                }
                iVar7 = FUN_00d8c7a0();
                if ((iVar7 < iVar5) && (cVar4 = FUN_00d8f400(), cVar4 != '\0')) {
                  FUN_00d8c7a0();
                  FUN_00d8c7a0();
                  FUN_00d97ce0();
                  FUN_00d8d560();
                  if ((local_38 != '\0') && (local_40 != 0)) {
                    FUN_00d50b20();
                  }
                  FUN_0123ff10();
                  bVar2 = true;
                  bVar1 = true;
                }
                else {
                  bVar2 = false;
                  bVar1 = false;
                }
                if (local_40 != 0) {
                  FUN_00d50b20();
                  bVar1 = bVar2;
                }
                uVar9 = uVar9 >> 1;
              } while (!bVar1 && 1 < uVar6);
            }
          }
        }
        else {
          FUN_00d8d560();
        }
        FUN_0123ff30();
        FUN_0123fbe0();
        *(void*)(this_ptr + 1) = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            *this_ptr = local_40;
            *(void*)(this_ptr + 1) = 1;
            goto LAB_017866e9;
          }
          local_40 = 0;
        }
        *this_ptr = local_40;
        *(void*)(this_ptr + 1) = 1;
      }
LAB_017866e9:
      FUN_00d50b20();
      return;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

