// Function: FUN_01d54930
// Address: 01d54930
// Size: 737 bytes
// Class: GNString


void FUN_01d54930(void)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  longlong lVar8;
  int iVar9;
  longlong unaff_RDI;
  ushort uVar10;
  int iVar11;
  uint unaff_R13D;
  uint unaff_R15D;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  
  lVar3 = *(longlong *)(unaff_RDI + 0x10);
  fVar12 = *(float *)(lVar3 + 0x1c) * *(float *)(lVar3 + 0x48);
  if (0.0 < fVar12) {
    fVar18 = *(float *)(lVar3 + 0x48) * *(float *)(lVar3 + 0x20);
    fVar16 = 0.0;
    iVar11 = 0;
    fVar17 = DAT_02394220;
    fVar19 = DAT_02390124;
    dVar20 = DAT_023942d0;
    do {
      if (DAT_0239424c < fVar18) {
        fVar13 = 0.0;
        iVar9 = 1;
        do {
          lVar3 = *(longlong *)(unaff_RDI + 0x10);
          fVar14 = *(float *)(lVar3 + 0x1c) * *(float *)(lVar3 + 0x48);
          if ((fVar16 < fVar14) && (fVar13 < *(float *)(lVar3 + 0x48) * *(float *)(lVar3 + 0x20))) {
            lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x50) + 8);
            lVar8 = (longlong)((int)fVar14 * (iVar9 + -1) + iVar11);
            bVar1 = *(byte *)(lVar4 + lVar8 * 4);
            unaff_R13D = (uint)bVar1;
            bVar6 = *(byte *)(lVar4 + 1 + lVar8 * 4);
            bVar5 = *(byte *)(lVar4 + 2 + lVar8 * 4);
            bVar2 = *(byte *)(lVar4 + 3 + lVar8 * 4);
            if ((byte)(bVar2 + 1) < 2) {
              lVar3 = *(longlong *)(lVar3 + 0x28);
            }
            else {
              uVar10 = (ushort)bVar2;
              bVar5 = (byte)(((uint)(ushort)bVar5 * 0x100 - (uint)(ushort)bVar5 & 0xffff) /
                            (uint)uVar10);
              bVar6 = (byte)(((uint)bVar6 * 0xff) / (uint)uVar10);
              unaff_R13D = ((uint)bVar1 * 0x100 - (uint)bVar1 & 0xffff) / (uint)uVar10;
              lVar3 = *(longlong *)(lVar3 + 0x28);
            }
            unaff_R15D = (uint)bVar2;
            if ((((lVar3 != 0) &&
                 (unaff_R15D = (uint)bVar2,
                 bVar5 == (byte)(int)((double)(*(float *)(lVar3 + 0x18) * fVar17) + dVar20))) &&
                (unaff_R15D = (uint)bVar2,
                bVar6 == (byte)(int)((double)(*(float *)(lVar3 + 0x14) * fVar17) + dVar20))) &&
               (unaff_R15D = (uint)bVar2,
               (char)unaff_R13D == (char)(int)((double)(*(float *)(lVar3 + 0x10) * fVar17) + dVar20)
               )) {
              unaff_R15D = 0;
            }
          }
          fVar14 = (fVar19 - (float)(unaff_R13D & 0xff) / fVar17) *
                   ((float)(unaff_R15D & 0xff) / fVar17);
          unaff_R15D = (uint)(fVar14 * fVar17);
          lVar3 = *(longlong *)(unaff_RDI + 0x18);
          fVar15 = *(float *)(lVar3 + 0x1c) * *(float *)(lVar3 + 0x48);
          if ((fVar16 < fVar15) && (fVar13 < *(float *)(lVar3 + 0x48) * *(float *)(lVar3 + 0x20))) {
            lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x50) + 8);
            lVar8 = (longlong)((iVar9 + -1) * (int)fVar15 + iVar11);
            uVar7 = (undefined1)
                    ((((int)((fVar19 - fVar14) * fVar17) & 0xffU) * (unaff_R15D & 0xff)) / 0xff);
            *(undefined1 *)(lVar4 + lVar8 * 4) = uVar7;
            *(undefined1 *)(lVar4 + 1 + lVar8 * 4) = uVar7;
            *(undefined1 *)(lVar4 + 2 + lVar8 * 4) = uVar7;
            *(char *)(lVar4 + 3 + lVar8 * 4) = (char)unaff_R15D;
            if (**(longlong **)(lVar3 + 0x50) != 0) {
              _CGImageRelease();
              dVar20 = DAT_023942d0;
              fVar17 = DAT_02394220;
              fVar19 = DAT_02390124;
              **(undefined8 **)(lVar3 + 0x50) = 0;
            }
          }
          fVar13 = (float)iVar9;
          iVar9 = iVar9 + 1;
        } while (fVar13 < fVar18);
      }
      iVar11 = iVar11 + 1;
      fVar16 = (float)iVar11;
    } while (fVar16 < fVar12);
  }
  return;
}


