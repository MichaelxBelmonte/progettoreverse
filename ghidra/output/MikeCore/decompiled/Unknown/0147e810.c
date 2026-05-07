// Function: FUN_0147e810
// Address: 0147e810
// Size: 1599 bytes
// Class: Unknown


float FUN_0147e810(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined8 *puVar8;
  void *pvVar9;
  longlong lVar10;
  longlong lVar11;
  pthread_key_t pVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong *unaff_RSI;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  longlong local_70;
  char local_68;
  longlong local_40;
  
  fVar18 = 0.0;
  if ((*unaff_RSI != 0) && (*(int *)(*unaff_RSI + 0xc) != 0)) {
    puVar8 = (undefined8 *)FUN_00e83010();
    ___bzero();
    lVar10 = *unaff_RSI;
    if (*(int *)(lVar10 + 0xc) < 1) {
      bVar6 = false;
      lVar17 = 0;
      bVar3 = false;
      lVar16 = 0;
      bVar5 = false;
      local_40 = 0;
    }
    else {
      lVar14 = 0;
      local_40 = 0;
      bVar5 = false;
      bVar3 = false;
      lVar17 = 0;
      lVar13 = 0;
      bVar6 = false;
      lVar11 = 0;
      do {
        pVar12 = (pthread_key_t)lVar13;
        lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + lVar14 * 8);
        if (local_40 == lVar10) {
          if ((!bVar5) && (local_40 != 0)) {
            bVar5 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          if ((bVar5) && (local_40 != 0)) {
            FUN_00d50b20();
            bVar5 = true;
            local_40 = lVar10;
          }
          else {
            bVar5 = true;
            local_40 = lVar10;
          }
        }
        pvVar9 = _pthread_getspecific(pVar12);
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          pVar12 = (pthread_key_t)local_40;
        }
        cVar7 = FUN_014bc070();
        lVar16 = lVar11;
        if (cVar7 == '\0') {
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014c2a40();
          if (local_70 == lVar11) {
            bVar4 = bVar3;
            if ((!bVar3) && (local_70 != 0)) {
              if (local_68 != '\0') {
                bVar4 = true;
                goto LAB_0147ea5e;
              }
              FUN_00d50b00();
              bVar4 = true;
            }
LAB_0147ea4a:
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            lVar16 = local_70;
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
              bVar4 = true;
              if ((bVar3) && (lVar11 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_0147ea4a;
            }
            bVar4 = true;
            if ((bVar3) && (lVar11 != 0)) {
              FUN_00d50b20();
            }
          }
LAB_0147ea5e:
          bVar3 = bVar4;
          if (0 < *(int *)(lVar16 + 0xc)) {
            lVar10 = 0;
            do {
              lVar11 = *(longlong *)(*(longlong *)(lVar16 + 0x10) + lVar10 * 8);
              if (lVar17 == lVar11) {
                if ((!bVar6) && (lVar17 != 0)) {
                  bVar6 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar11 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar6) && (lVar17 != 0)) {
                  FUN_00d50b20();
                  bVar6 = true;
                  lVar17 = lVar11;
                }
                else {
                  bVar6 = true;
                  lVar17 = lVar11;
                }
              }
              lVar11 = (longlong)((int)*(float *)(lVar17 + 0x18) % 100);
              *(float *)((longlong)puVar8 + lVar11 * 4) =
                   *(float *)(lVar17 + 0x1c) + *(float *)((longlong)puVar8 + lVar11 * 4);
              lVar10 = lVar10 + 1;
            } while (lVar10 < *(int *)(lVar16 + 0xc));
          }
        }
        lVar14 = lVar14 + 1;
        lVar10 = *unaff_RSI;
        lVar13 = (longlong)*(int *)(lVar10 + 0xc);
        lVar11 = lVar16;
      } while (lVar14 < lVar13);
    }
    puVar8[100] = *puVar8;
    puVar8[0x65] = puVar8[1];
    puVar8[0x32] = *puVar8;
    puVar8[0x33] = puVar8[1];
    puVar8[0x66] = puVar8[2];
    puVar8[0x67] = puVar8[3];
    puVar8[0x34] = puVar8[2];
    puVar8[0x35] = puVar8[3];
    puVar8[0x68] = puVar8[4];
    puVar8[0x69] = puVar8[5];
    puVar8[0x36] = puVar8[4];
    puVar8[0x37] = puVar8[5];
    puVar8[0x6a] = puVar8[6];
    puVar8[0x6b] = puVar8[7];
    puVar8[0x38] = puVar8[6];
    puVar8[0x39] = puVar8[7];
    puVar8[0x6c] = puVar8[8];
    puVar8[0x6d] = puVar8[9];
    puVar8[0x3a] = puVar8[8];
    puVar8[0x3b] = puVar8[9];
    puVar8[0x6e] = puVar8[10];
    puVar8[0x6f] = puVar8[0xb];
    puVar8[0x3c] = puVar8[10];
    puVar8[0x3d] = puVar8[0xb];
    puVar8[0x70] = puVar8[0xc];
    puVar8[0x71] = puVar8[0xd];
    puVar8[0x3e] = puVar8[0xc];
    puVar8[0x3f] = puVar8[0xd];
    puVar8[0x72] = puVar8[0xe];
    puVar8[0x73] = puVar8[0xf];
    puVar8[0x40] = puVar8[0xe];
    puVar8[0x41] = puVar8[0xf];
    *(undefined4 *)(puVar8 + 0x74) = *(undefined4 *)(puVar8 + 0x10);
    *(undefined4 *)((longlong)puVar8 + 0x3a4) = *(undefined4 *)((longlong)puVar8 + 0x84);
    *(undefined4 *)(puVar8 + 0x75) = *(undefined4 *)(puVar8 + 0x11);
    *(undefined4 *)((longlong)puVar8 + 0x3ac) = *(undefined4 *)((longlong)puVar8 + 0x8c);
    *(undefined4 *)(puVar8 + 0x42) = *(undefined4 *)(puVar8 + 0x10);
    *(undefined4 *)((longlong)puVar8 + 0x214) = *(undefined4 *)((longlong)puVar8 + 0x84);
    *(undefined4 *)(puVar8 + 0x43) = *(undefined4 *)(puVar8 + 0x11);
    *(undefined4 *)((longlong)puVar8 + 0x21c) = *(undefined4 *)((longlong)puVar8 + 0x8c);
    *(undefined4 *)(puVar8 + 0x76) = *(undefined4 *)(puVar8 + 0x12);
    *(undefined4 *)((longlong)puVar8 + 0x3b4) = *(undefined4 *)((longlong)puVar8 + 0x94);
    *(undefined4 *)(puVar8 + 0x77) = *(undefined4 *)(puVar8 + 0x13);
    *(undefined4 *)((longlong)puVar8 + 0x3bc) = *(undefined4 *)((longlong)puVar8 + 0x9c);
    *(undefined4 *)(puVar8 + 0x44) = *(undefined4 *)(puVar8 + 0x12);
    *(undefined4 *)((longlong)puVar8 + 0x224) = *(undefined4 *)((longlong)puVar8 + 0x94);
    *(undefined4 *)(puVar8 + 0x45) = *(undefined4 *)(puVar8 + 0x13);
    *(undefined4 *)((longlong)puVar8 + 0x22c) = *(undefined4 *)((longlong)puVar8 + 0x9c);
    *(undefined4 *)(puVar8 + 0x78) = *(undefined4 *)(puVar8 + 0x14);
    *(undefined4 *)((longlong)puVar8 + 0x3c4) = *(undefined4 *)((longlong)puVar8 + 0xa4);
    *(undefined4 *)(puVar8 + 0x79) = *(undefined4 *)(puVar8 + 0x15);
    *(undefined4 *)((longlong)puVar8 + 0x3cc) = *(undefined4 *)((longlong)puVar8 + 0xac);
    *(undefined4 *)(puVar8 + 0x46) = *(undefined4 *)(puVar8 + 0x14);
    *(undefined4 *)((longlong)puVar8 + 0x234) = *(undefined4 *)((longlong)puVar8 + 0xa4);
    *(undefined4 *)(puVar8 + 0x47) = *(undefined4 *)(puVar8 + 0x15);
    *(undefined4 *)((longlong)puVar8 + 0x23c) = *(undefined4 *)((longlong)puVar8 + 0xac);
    puVar8[0x7a] = puVar8[0x16];
    puVar8[0x7b] = puVar8[0x17];
    puVar8[0x48] = puVar8[0x16];
    puVar8[0x49] = puVar8[0x17];
    puVar8[0x7c] = puVar8[0x18];
    puVar8[0x7d] = puVar8[0x19];
    puVar8[0x4a] = puVar8[0x18];
    puVar8[0x4b] = puVar8[0x19];
    puVar8[0x7e] = puVar8[0x1a];
    puVar8[0x7f] = puVar8[0x1b];
    puVar8[0x4c] = puVar8[0x1a];
    puVar8[0x4d] = puVar8[0x1b];
    puVar8[0x80] = puVar8[0x1c];
    puVar8[0x81] = puVar8[0x1d];
    puVar8[0x4e] = puVar8[0x1c];
    puVar8[0x4f] = puVar8[0x1d];
    puVar8[0x82] = puVar8[0x1e];
    puVar8[0x83] = puVar8[0x1f];
    puVar8[0x50] = puVar8[0x1e];
    puVar8[0x51] = puVar8[0x1f];
    puVar8[0x84] = puVar8[0x20];
    puVar8[0x85] = puVar8[0x21];
    puVar8[0x52] = puVar8[0x20];
    puVar8[0x53] = puVar8[0x21];
    puVar8[0x86] = puVar8[0x22];
    puVar8[0x87] = puVar8[0x23];
    puVar8[0x54] = puVar8[0x22];
    puVar8[0x55] = puVar8[0x23];
    puVar8[0x88] = puVar8[0x24];
    puVar8[0x89] = puVar8[0x25];
    puVar8[0x56] = puVar8[0x24];
    puVar8[0x57] = puVar8[0x25];
    puVar8[0x8a] = puVar8[0x26];
    puVar8[0x8b] = puVar8[0x27];
    puVar8[0x58] = puVar8[0x26];
    puVar8[0x59] = puVar8[0x27];
    puVar8[0x8c] = puVar8[0x28];
    puVar8[0x8d] = puVar8[0x29];
    puVar8[0x5a] = puVar8[0x28];
    puVar8[0x5b] = puVar8[0x29];
    puVar8[0x8e] = puVar8[0x2a];
    puVar8[0x8f] = puVar8[0x2b];
    puVar8[0x5c] = puVar8[0x2a];
    puVar8[0x5d] = puVar8[0x2b];
    puVar8[0x90] = puVar8[0x2c];
    puVar8[0x91] = puVar8[0x2d];
    puVar8[0x5e] = puVar8[0x2c];
    puVar8[0x5f] = puVar8[0x2d];
    puVar8[0x92] = puVar8[0x2e];
    puVar8[0x93] = puVar8[0x2f];
    puVar8[0x60] = puVar8[0x2e];
    puVar8[0x61] = puVar8[0x2f];
    puVar8[0x94] = puVar8[0x30];
    puVar8[0x95] = puVar8[0x31];
    puVar8[0x62] = puVar8[0x30];
    puVar8[99] = puVar8[0x31];
    FUN_015c1480(DAT_02394240,300);
    iVar15 = 100;
    fVar18 = 0.0;
    lVar10 = 100;
    do {
      fVar19 = *(float *)((longlong)puVar8 + lVar10 * 4);
      iVar1 = (int)lVar10;
      if (fVar18 < fVar19) {
        iVar15 = iVar1;
      }
      fVar20 = *(float *)((longlong)puVar8 + lVar10 * 4 + 4);
      if (fVar19 <= fVar18) {
        fVar19 = fVar18;
      }
      iVar2 = iVar1 + 1;
      if (fVar20 <= fVar19) {
        fVar20 = fVar19;
        iVar2 = iVar15;
      }
      fVar18 = *(float *)((longlong)puVar8 + lVar10 * 4 + 8);
      iVar15 = iVar1 + 2;
      if (fVar18 <= fVar20) {
        fVar18 = fVar20;
        iVar15 = iVar2;
      }
      fVar19 = *(float *)((longlong)puVar8 + lVar10 * 4 + 0xc);
      iVar2 = iVar1 + 3;
      if (fVar19 <= fVar18) {
        fVar19 = fVar18;
        iVar2 = iVar15;
      }
      fVar18 = *(float *)((longlong)puVar8 + lVar10 * 4 + 0x10);
      iVar15 = iVar1 + 4;
      if (fVar18 <= fVar19) {
        fVar18 = fVar19;
        iVar15 = iVar2;
      }
      lVar10 = lVar10 + 5;
    } while (lVar10 != 200);
    fVar18 = (float)(iVar15 + -100);
    if (0x96 < iVar15) {
      fVar18 = fVar18 + DAT_0241b664;
    }
    FUN_00e83070();
    if ((bVar6) && (lVar17 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar3) && (lVar16 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar5) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return fVar18;
}


