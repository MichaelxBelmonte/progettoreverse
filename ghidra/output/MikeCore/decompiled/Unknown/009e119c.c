// Function: FUN_009e119c
// Address: 009e119c
// Size: 878 bytes
// Class: Unknown
// String references:
//   "Invalid lookbehind assertion encountered in the regular expression."


void FUN_009e119c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  void *pvVar6;
  undefined1 *puVar7;
  uint *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar8;
  undefined8 uVar9;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  byte local_70;
  undefined2 uStack_6f;
  undefined4 uStack_6d;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48 [2];
  undefined1 local_31;
  
  local_31 = (undefined1)unaff_RDI[3];
  local_48[0] = (undefined1 *)0x0;
  local_58 = (undefined1 *)0x0;
  puStack_50 = (undefined1 *)0x0;
  if (unaff_RSI != (uint *)0x0) {
    do {
      uVar3 = *unaff_RSI;
      puVar7 = local_90;
      if (uVar3 < 0x1d) {
        if ((0x3c60000U >> (uVar3 & 0x1f) & 1) == 0) {
          if (uVar3 == 0x1a) {
            uVar3 = FUN_009e1dbe();
            unaff_RSI[4] = uVar3;
            puVar7 = local_90;
            if ((int)uVar3 < 0) {
              lVar2 = *unaff_RDI;
              if (*(int *)(lVar2 + 0x2c) == 0) {
                *(undefined4 *)(lVar2 + 0x2c) = 2;
              }
              *(undefined8 *)(lVar2 + 0x38) = 0;
              *(undefined8 *)(lVar2 + 0x30) = 0;
              if ((*(byte *)(lVar2 + 0x2a) & 4) == 0) {
                FUN_009d5ed0();
                pvVar6 = (void *)0x0;
                FUN_00acde90(0,2);
                FUN_00acdf00();
                FUN_00acded0();
                puVar7 = local_90;
                if ((local_70 & 1) != 0) goto LAB_009e136f;
              }
            }
          }
          else if (uVar3 == 0x1c) {
            *(char *)(unaff_RDI + 3) = (char)unaff_RSI[4];
          }
        }
        else {
          lVar2 = unaff_RDI[3];
          if (puStack_50 < local_48[0]) {
            *puStack_50 = (char)lVar2;
            *(uint *)(puStack_50 + 1) = CONCAT13((undefined1)uStack_6d,CONCAT21(uStack_6f,local_70))
            ;
            *(undefined4 *)(puStack_50 + 4) = uStack_6d;
            *(uint **)(puStack_50 + 8) = unaff_RSI;
            puStack_50 = puStack_50 + 0x10;
          }
          else {
            if (0xfffffffffffffff < ((longlong)puStack_50 - (longlong)local_58 >> 4) + 1U) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            FUN_009e1faa(local_48);
            *puStack_88 = (char)lVar2;
            *(uint *)(puStack_88 + 1) = CONCAT13((undefined1)uStack_6d,CONCAT21(uStack_6f,local_70))
            ;
            *(undefined4 *)(puStack_88 + 4) = uStack_6d;
            *(uint **)(puStack_88 + 8) = unaff_RSI;
            puVar5 = puStack_88 + 0x10;
            puVar7 = puStack_50 + -(longlong)local_58;
            local_90 = local_90 + -(longlong)puVar7;
            if (0 < (longlong)puVar7) {
              puStack_88 = puVar5;
              _memcpy(puVar5,puVar7,(size_t)param_3);
              puVar5 = puStack_88;
            }
            puVar7 = local_48[0];
            local_48[0] = local_80;
            local_80 = puVar7;
            pvVar6 = (void *)0x0;
            puStack_88 = puStack_50;
            if ((longlong)puStack_50 - (longlong)local_58 != 0) {
              pvVar6 = (void *)(~(((longlong)puStack_50 - (longlong)local_58) - 0x10U >> 4) * 0x10);
              puStack_88 = puStack_50 + (longlong)pvVar6;
            }
            bVar8 = local_58 != (undefined1 *)0x0;
            local_98 = local_58;
            puVar7 = local_58;
            local_58 = local_90;
            puStack_50 = puVar5;
            if (bVar8) {
LAB_009e136f:
              local_90 = puVar7;
              operator_delete(pvVar6);
              puVar7 = local_90;
            }
          }
        }
      }
      local_90 = puVar7;
      unaff_RSI = *(uint **)(unaff_RSI + 2);
    } while (unaff_RSI != (uint *)0x0);
    puVar7 = puStack_50;
    if (puStack_50 != local_58) {
      do {
        if ((char)unaff_RDI[6] != '\0') {
          local_98 = (undefined1 *)((ulonglong)local_98 & 0xffffffffffffff00);
          FUN_009b0b28(puStack_50,&local_98);
        }
        *(undefined1 *)(unaff_RDI + 3) = puStack_50[-0x10];
        puVar1 = *(undefined4 **)(puStack_50 + -8);
        puStack_50 = puStack_50 + -0x10;
        unaff_RDI[5] = 0;
        uVar9 = FUN_009e156a(puVar1 + 0x46,puVar1 + 6,1);
        unaff_RDI[5] = 0;
        if ((char)unaff_RDI[6] != '\0') {
          local_98 = (undefined1 *)((ulonglong)local_98 & 0xffffffffffffff00);
          FUN_009b0b28(uVar9,&local_98);
        }
        FUN_009e156a(puVar1 + 0x46,puVar1 + 6,2);
        uVar4 = FUN_009e1f4c();
        *puVar1 = uVar4;
        puVar7 = puStack_50;
      } while (puStack_50 != local_58);
    }
    *(undefined1 *)(unaff_RDI + 3) = local_31;
    if (local_58 != (undefined1 *)0x0) {
      puStack_50 = local_58;
      operator_delete(puVar7);
    }
  }
  return;
}


