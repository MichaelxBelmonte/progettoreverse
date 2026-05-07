// Function: FUN_00ad83c0
// Address: 00ad83c0
// Size: 531 bytes
// Class: Unknown


void FUN_00ad83c0(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *unaff_RSI;
  longlong lVar7;
  ulonglong *unaff_RDI;
  undefined8 *puVar8;
  void *pvVar9;
  undefined1 *puVar10;
  
  puVar8 = (undefined8 *)unaff_RDI[2];
  if (puVar8 == (undefined8 *)unaff_RDI[3]) {
    puVar4 = (undefined8 *)*unaff_RDI;
    puVar5 = (undefined8 *)unaff_RDI[1];
    if (puVar5 < puVar4 || (longlong)puVar5 - (longlong)puVar4 == 0) {
      lVar2 = (longlong)unaff_RDI[3] - (longlong)puVar4;
      puVar3 = (undefined1 *)(lVar2 >> 2);
      puVar10 = (undefined1 *)((longlong)&MACH_HEADER.magic + 1);
      if (lVar2 != 0) {
        puVar10 = puVar3;
      }
      if ((ulonglong)puVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00ad7940();
      }
      pvVar9 = operator_new((ulong)puVar3);
      puVar1 = (undefined8 *)((longlong)pvVar9 + ((ulonglong)puVar10 >> 2) * 8);
      lVar2 = (longlong)puVar8 - (longlong)puVar5;
      puVar8 = puVar1;
      if (lVar2 != 0) {
        uVar6 = ((uint)(lVar2 - 8U >> 3) & 0x1fffffff) + 1;
        if ((uVar6 & 7) != 0) {
          lVar7 = -((ulonglong)uVar6 & 7);
          do {
            puVar3 = (undefined1 *)*puVar5;
            *puVar8 = puVar3;
            puVar8 = puVar8 + 1;
            puVar5 = puVar5 + 1;
            lVar7 = lVar7 + 1;
          } while (lVar7 != 0);
        }
        if (0x37 < lVar2 - 8U) {
          puVar3 = (undefined1 *)0x0;
          puVar4 = puVar8;
          do {
            *puVar4 = *(undefined8 *)((longlong)puVar5 + (longlong)puVar3);
            *(undefined8 *)((longlong)(puVar8 + 1) + (longlong)puVar3) =
                 *(undefined8 *)((longlong)(puVar5 + 1) + (longlong)puVar3);
            *(undefined8 *)((longlong)(puVar8 + 2) + (longlong)puVar3) =
                 *(undefined8 *)((longlong)(puVar5 + 2) + (longlong)puVar3);
            *(undefined8 *)((longlong)(puVar8 + 3) + (longlong)puVar3) =
                 *(undefined8 *)((longlong)(puVar5 + 3) + (longlong)puVar3);
            *(undefined8 *)((longlong)(puVar8 + 4) + (longlong)puVar3) =
                 *(undefined8 *)((longlong)(puVar5 + 4) + (longlong)puVar3);
            *(undefined8 *)((longlong)(puVar8 + 5) + (longlong)puVar3) =
                 *(undefined8 *)((longlong)(puVar5 + 5) + (longlong)puVar3);
            *(undefined8 *)((longlong)(puVar8 + 6) + (longlong)puVar3) =
                 *(undefined8 *)((longlong)(puVar5 + 6) + (longlong)puVar3);
            *(undefined8 *)((longlong)(puVar8 + 7) + (longlong)puVar3) =
                 *(undefined8 *)((longlong)(puVar5 + 7) + (longlong)puVar3);
            puVar4 = (undefined8 *)((longlong)(puVar8 + 8) + (longlong)puVar3);
            puVar3 = puVar3 + 0x40;
          } while ((undefined1 *)
                   ((longlong)pvVar9 +
                   ((((ulonglong)puVar10 >> 2) * 8 + (lVar2 >> 3) * 8) - (longlong)puVar8)) !=
                   puVar3);
        }
        puVar4 = (undefined8 *)*unaff_RDI;
        puVar8 = (undefined8 *)((longlong)puVar1 + lVar2);
      }
      *unaff_RDI = (ulonglong)pvVar9;
      unaff_RDI[1] = (ulonglong)puVar1;
      unaff_RDI[2] = (ulonglong)puVar8;
      unaff_RDI[3] = (ulonglong)((longlong)pvVar9 + (longlong)puVar10 * 8);
      if (puVar4 != (undefined8 *)0x0) {
        operator_delete(puVar3);
        puVar8 = (undefined8 *)unaff_RDI[2];
      }
    }
    else {
      lVar2 = (longlong)puVar5 - (longlong)puVar4 >> 3;
      lVar2 = (lVar2 + 1) - (lVar2 + 1 >> 0x3f) >> 1;
      pvVar9 = (void *)((longlong)puVar8 - (longlong)puVar5);
      puVar4 = puVar5;
      if (pvVar9 != (void *)0x0) {
        _memmove((void *)-lVar2,pvVar9,param_3);
        puVar4 = (undefined8 *)unaff_RDI[1];
      }
      puVar8 = puVar5 + (((longlong)pvVar9 >> 3) - lVar2);
      unaff_RDI[2] = (ulonglong)puVar8;
      unaff_RDI[1] = (ulonglong)(puVar4 + -lVar2);
    }
  }
  *puVar8 = *unaff_RSI;
  unaff_RDI[2] = unaff_RDI[2] + 8;
  return;
}


