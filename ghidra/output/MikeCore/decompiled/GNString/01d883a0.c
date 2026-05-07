// Function: FUN_01d883a0
// Address: 01d883a0
// Size: 634 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01d8859b) */
/* WARNING: Removing unreachable block (ram,0x01d885a4) */
/* WARNING: Removing unreachable block (ram,0x01d88611) */
/* WARNING: Removing unreachable block (ram,0x01d8861e) */

void FUN_01d883a0(undefined4 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float local_a8;
  float fStack_a4;
  undefined4 local_98;
  undefined8 local_78;
  undefined8 local_68;
  longlong local_48;
  char local_40;
  
  lVar4 = *(longlong *)(unaff_RSI + 0x1b0);
  uVar6 = *(uint *)(lVar4 + 0x18);
  if ((uVar6 & 0xfffffff0) == 0x800) {
    FUN_00c8e340(param_1,0);
  }
  else if (0xf < (int)uVar6) {
    uVar6 = uVar6 >> 4;
    lVar8 = 0;
    lVar7 = (longlong)(int)(uVar6 - 1);
    if (lVar7 < 1) goto LAB_01d88530;
    do {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      lVar5 = lVar8 * 0x10;
      local_78 = *(undefined8 *)(lVar4 + lVar5);
      local_68 = *(undefined8 *)(lVar4 + 8 + lVar5);
      lVar9 = lVar7 << 4;
      while( true ) {
        lVar7 = lVar7 + -1;
        uVar2 = *(undefined8 *)(lVar4 + lVar9);
        uVar3 = *(undefined8 *)(lVar4 + 8 + lVar9);
        fVar11 = (float)local_68;
        fVar12 = local_68._4_4_;
        FUN_00d05360((undefined4)local_78);
        local_a8 = (float)uVar3;
        fStack_a4 = (float)((ulonglong)uVar3 >> 0x20);
        if ((local_68._4_4_ * (float)local_68 * DAT_0239011c < fVar12 * fVar11) ||
           (fStack_a4 * local_a8 * DAT_0239011c < fVar12 * fVar11)) {
          local_98 = (undefined4)uVar2;
          local_78 = FUN_00d052e0(local_98,local_a8,(undefined4)local_78,(float)local_68);
          local_68 = CONCAT44(fStack_a4,local_a8);
          puVar1 = (undefined8 *)(*(longlong *)(*(longlong *)(unaff_RSI + 0x1b0) + 0x10) + lVar5);
          *puVar1 = local_78;
          *(float *)(puVar1 + 1) = local_a8;
          *(float *)((longlong)puVar1 + 0xc) = fStack_a4;
          FUN_00e7b4e0();
          FUN_00c921e0();
          uVar6 = uVar6 - 1;
        }
        if (lVar7 <= lVar8) break;
        lVar4 = *(longlong *)(*(longlong *)(unaff_RSI + 0x1b0) + 0x10);
        lVar9 = lVar9 + -0x10;
      }
LAB_01d88530:
      do {
        lVar8 = lVar8 + 1;
        if ((int)uVar6 <= lVar8) goto LAB_01d8855a;
        lVar4 = *(longlong *)(unaff_RSI + 0x1b0);
        lVar7 = (longlong)(int)(uVar6 - 1);
      } while (lVar7 <= lVar8);
    } while( true );
  }
LAB_01d8855a:
  lVar4 = *(longlong *)(unaff_RSI + 0x1b0);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00c8e4f0();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  uVar10 = FUN_00c92160();
  if (lVar4 != 0) {
    uVar10 = FUN_00d50b20();
  }
  FUN_00c8e340(uVar10,0);
  *unaff_RDI = local_48;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


