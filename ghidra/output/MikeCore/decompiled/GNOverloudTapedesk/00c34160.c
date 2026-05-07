// Function: FUN_00c34160
// Address: 00c34160
// Size: 803 bytes
// Class: GNOverloudTapedesk


/* WARNING: Removing unreachable block (ram,0x00c34458) */
/* WARNING: Removing unreachable block (ram,0x00c34461) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c34160(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *unaff_RSI;
  longlong lVar8;
  longlong *unaff_RDI;
  float fVar9;
  float extraout_XMM0_Db;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong local_58;
  char local_50;
  uint local_48;
  
  fVar11 = (float)((ulonglong)param_2 >> 0x20);
  if (unaff_RDI[0x3c] != 0) {
    iVar2 = *(int *)(unaff_RDI[0x3c] + 0x18);
    iVar7 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar7 = iVar2;
    }
    if (3 < iVar2) {
      fVar9 = (float)(**(code **)(*unaff_RDI + 0x930))();
      FUN_01e3f820();
      pfVar3 = *(float **)(unaff_RDI[0x3c] + 0x10);
      fVar1 = *pfVar3;
      if (fVar9 <= fVar1) {
        fVar13 = **(float **)(unaff_RDI[0x3d] + 0x10);
      }
      else {
        uVar6 = (ulonglong)((iVar7 >> 2) - 1);
        if (pfVar3[uVar6] <= fVar9) {
          fVar13 = *(float *)(*(longlong *)(unaff_RDI[0x3d] + 0x10) + uVar6 * 4);
        }
        else {
          uVar6 = 0;
          while (fVar1 < fVar9) {
            lVar8 = uVar6 + 1;
            uVar6 = uVar6 + 1;
            fVar1 = pfVar3[lVar8];
          }
          lVar8 = (longlong)((uVar6 << 0x20) + -0x100000000) >> 0x1e;
          fVar10 = *(float *)((longlong)pfVar3 + lVar8);
          fVar13 = *(float *)(*(longlong *)(unaff_RDI[0x3d] + 0x10) + lVar8);
          fVar13 = ((*(float *)(*(longlong *)(unaff_RDI[0x3d] + 0x10) + (uVar6 & 0xffffffff) * 4) -
                    fVar13) * (fVar9 - fVar10)) / (fVar1 - fVar10) + fVar13;
        }
      }
      fVar1 = *(float *)(unaff_RDI + 0x39);
      FUN_01d48370();
      plVar4 = (longlong *)*unaff_RSI;
      FUN_01e3f820();
      (**(code **)(*plVar4 + 0x390))();
      FUN_01cfbee0(DAT_0239011c,0,0);
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d488d0();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      fVar10 = (float)((uint)(DAT_023b5d7c - fVar13) & -(uint)(fVar13 < DAT_023b5d7c));
      fVar12 = 0.0;
      local_48 = ~-(uint)(fVar13 < DAT_023b5d7c) & ((uint)(DAT_023b5d80 + fVar13) ^ _DAT_023945e0) |
                 (uint)fVar10;
      plVar4 = (longlong *)*unaff_RSI;
      fVar9 = (float)FUN_01e3f820();
      fVar10 = fVar10 * DAT_0239011c;
      FUN_01e3f820();
      (**(code **)(*plVar4 + 0x370))
                (fVar9 + fVar10,
                 fVar12 + extraout_XMM0_Db + DAT_02390d00 + *(float *)(unaff_RDI + 0x39));
      (**(code **)(*(longlong *)*unaff_RSI + 0x378))(local_48);
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &DAT_02680400;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      *(undefined8 *)((longlong)puVar5 + 0x39) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x41) = 0;
      (*DAT_02680418)();
      FUN_01d38ba0(DAT_02394244,0);
      FUN_01d38ba0(0,(uint)(fVar11 + fVar1) ^ _DAT_023945e0);
      FUN_01d38ba0(DAT_0239458c,0);
      FUN_01d38b10();
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
      FUN_01d48390();
      FUN_00d50b20();
    }
  }
  return;
}


