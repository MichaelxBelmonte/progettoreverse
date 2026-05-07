// Function: FUN_01750eb0
// Address: 01750eb0
// Size: 1418 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x017510d0) */
/* WARNING: Removing unreachable block (ram,0x017510d9) */

ulonglong FUN_01750eb0(pthread_key_t param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  char cVar28;
  int iVar29;
  void *pvVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_40;
  char local_38;
  
  cVar28 = FUN_0173ed60();
  if (cVar28 != '\0') {
    pvVar30 = _pthread_getspecific(param_1);
    if (pvVar30 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar28 = FUN_0173ed60();
    if (cVar28 != '\0') {
      lVar33 = *(longlong *)(unaff_RDI + 0x60);
      if (lVar33 != 0) {
        FUN_00d50b00();
      }
      pvVar30 = _pthread_getspecific(param_1);
      if (pvVar30 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar29 = FUN_01770c70();
      bVar5 = true;
      if (iVar29 < 0xd) {
        lVar32 = *unaff_RSI;
        pvVar30 = _pthread_getspecific(param_1);
        if (pvVar30 != (void *)0x0) {
          lVar32 = *unaff_RSI;
          lVar31 = FUN_00e8b990();
          if (lVar31 != 0) {
            lVar32 = *(longlong *)(lVar32 + 0x20 + (ulonglong)(*(uint *)(lVar31 + 0x154) & 1) * 8);
          }
        }
        lVar32 = *(longlong *)(lVar32 + 0x60);
        if (lVar32 != 0) {
          FUN_00d50b00();
        }
        pvVar30 = _pthread_getspecific(param_1);
        if (pvVar30 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar29 = FUN_01770c70();
        bVar5 = 0xc < iVar29;
        if (lVar32 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar33 != 0) {
        FUN_00d50b20();
      }
      if (!bVar5) {
        lVar33 = *unaff_RSI;
        pvVar30 = _pthread_getspecific(param_1);
        if (pvVar30 != (void *)0x0) {
          lVar33 = *unaff_RSI;
          lVar32 = FUN_00e8b990();
          if (lVar32 != 0) {
            lVar33 = *(longlong *)(lVar33 + 0x20 + (ulonglong)(*(uint *)(lVar32 + 0x154) & 1) * 8);
          }
        }
        FUN_0174c730();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_0174c730();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c8e690();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        puVar1 = *(undefined8 **)(local_40 + 0x10);
        puVar2 = *(undefined8 **)(local_40 + 0x10);
        uVar21 = puVar2[0xb];
        puVar1[10] = puVar2[10];
        puVar1[0xb] = uVar21;
        uVar21 = puVar2[9];
        puVar1[8] = puVar2[8];
        puVar1[9] = uVar21;
        uVar21 = *puVar2;
        uVar22 = puVar2[1];
        uVar23 = puVar2[2];
        uVar24 = puVar2[3];
        uVar25 = puVar2[4];
        uVar26 = puVar2[5];
        uVar27 = puVar2[7];
        puVar1[6] = puVar2[6];
        puVar1[7] = uVar27;
        puVar1[4] = uVar25;
        puVar1[5] = uVar26;
        puVar1[2] = uVar23;
        puVar1[3] = uVar24;
        *puVar1 = uVar21;
        puVar1[1] = uVar22;
        lVar32 = *(longlong *)(local_40 + 0x10);
        puVar3 = *(undefined4 **)(local_40 + 0x10);
        uVar21 = *(undefined8 *)(puVar3 + 0x16);
        *(undefined8 *)(lVar32 + 0xb0) = *(undefined8 *)(puVar3 + 0x14);
        *(undefined8 *)(lVar32 + 0xb8) = uVar21;
        uVar21 = *(undefined8 *)(puVar3 + 0x12);
        *(undefined8 *)(lVar32 + 0xa0) = *(undefined8 *)(puVar3 + 0x10);
        *(undefined8 *)(lVar32 + 0xa8) = uVar21;
        uVar6 = *puVar3;
        uVar7 = puVar3[1];
        uVar8 = puVar3[2];
        uVar9 = puVar3[3];
        uVar10 = puVar3[4];
        uVar11 = puVar3[5];
        uVar12 = puVar3[6];
        uVar13 = puVar3[7];
        uVar14 = puVar3[8];
        uVar15 = puVar3[9];
        uVar16 = puVar3[10];
        uVar17 = puVar3[0xb];
        uVar18 = puVar3[0xd];
        uVar19 = puVar3[0xe];
        uVar20 = puVar3[0xf];
        *(undefined4 *)(lVar32 + 0x90) = puVar3[0xc];
        *(undefined4 *)(lVar32 + 0x94) = uVar18;
        *(undefined4 *)(lVar32 + 0x98) = uVar19;
        *(undefined4 *)(lVar32 + 0x9c) = uVar20;
        *(undefined4 *)(lVar32 + 0x80) = uVar14;
        *(undefined4 *)(lVar32 + 0x84) = uVar15;
        *(undefined4 *)(lVar32 + 0x88) = uVar16;
        *(undefined4 *)(lVar32 + 0x8c) = uVar17;
        *(undefined4 *)(lVar32 + 0x70) = uVar10;
        *(undefined4 *)(lVar32 + 0x74) = uVar11;
        *(undefined4 *)(lVar32 + 0x78) = uVar12;
        *(undefined4 *)(lVar32 + 0x7c) = uVar13;
        *(undefined4 *)(lVar32 + 0x60) = uVar6;
        *(undefined4 *)(lVar32 + 100) = uVar7;
        *(undefined4 *)(lVar32 + 0x68) = uVar8;
        *(undefined4 *)(lVar32 + 0x6c) = uVar9;
        lVar32 = *(longlong *)(local_40 + 0x10);
        lVar31 = 0;
        do {
          if (*(int *)(lVar32 + lVar31 * 4) == 0) goto LAB_01751190;
          piVar4 = *(int **)(local_40 + 0x10);
          if (*(int *)(lVar32 + lVar31 * 4) == 0) {
            if (*piVar4 == 0) goto LAB_017511c1;
LAB_017513ff:
            uVar34 = 0;
            if (local_40 == 0) goto LAB_0175140e;
            goto LAB_01751406;
          }
          if (*piVar4 == 0) goto LAB_017513ff;
LAB_017511c1:
          if (*(int *)(lVar32 + 4 + lVar31 * 4) == 0) {
            if (piVar4[1] == 0) goto LAB_017511dc;
            goto LAB_017513ff;
          }
          if (piVar4[1] == 0) goto LAB_017513ff;
LAB_017511dc:
          if (*(int *)(lVar32 + 8 + lVar31 * 4) == 0) {
            if (piVar4[2] == 0) goto LAB_017511f7;
            goto LAB_017513ff;
          }
          if (piVar4[2] == 0) goto LAB_017513ff;
LAB_017511f7:
          if (*(int *)(lVar32 + 0xc + lVar31 * 4) == 0) {
            if (piVar4[3] == 0) goto LAB_01751212;
            goto LAB_017513ff;
          }
          if (piVar4[3] == 0) goto LAB_017513ff;
LAB_01751212:
          if (*(int *)(lVar32 + 0x10 + lVar31 * 4) == 0) {
            if (piVar4[4] == 0) goto LAB_0175122d;
            goto LAB_017513ff;
          }
          if (piVar4[4] == 0) goto LAB_017513ff;
LAB_0175122d:
          if (*(int *)(lVar32 + 0x14 + lVar31 * 4) == 0) {
            if (piVar4[5] == 0) goto LAB_01751248;
            goto LAB_017513ff;
          }
          if (piVar4[5] == 0) goto LAB_017513ff;
LAB_01751248:
          if (*(int *)(lVar32 + 0x18 + lVar31 * 4) == 0) {
            if (piVar4[6] == 0) goto LAB_01751263;
            goto LAB_017513ff;
          }
          if (piVar4[6] == 0) goto LAB_017513ff;
LAB_01751263:
          if (*(int *)(lVar32 + 0x1c + lVar31 * 4) == 0) {
            if (piVar4[7] == 0) goto LAB_0175127e;
            goto LAB_017513ff;
          }
          if (piVar4[7] == 0) goto LAB_017513ff;
LAB_0175127e:
          if (*(int *)(lVar32 + 0x20 + lVar31 * 4) == 0) {
            if (piVar4[8] == 0) goto LAB_01751299;
            goto LAB_017513ff;
          }
          if (piVar4[8] == 0) goto LAB_017513ff;
LAB_01751299:
          if (*(int *)(lVar32 + 0x24 + lVar31 * 4) == 0) {
            if (piVar4[9] == 0) goto LAB_017512b4;
            goto LAB_017513ff;
          }
          if (piVar4[9] == 0) goto LAB_017513ff;
LAB_017512b4:
          if (*(int *)(lVar32 + 0x28 + lVar31 * 4) == 0) {
            if (piVar4[10] == 0) goto LAB_017512cf;
            goto LAB_017513ff;
          }
          if (piVar4[10] == 0) goto LAB_017513ff;
LAB_017512cf:
          if (*(int *)(lVar32 + 0x2c + lVar31 * 4) == 0) {
            if (piVar4[0xb] == 0) goto LAB_017512ea;
            goto LAB_017513ff;
          }
          if (piVar4[0xb] == 0) goto LAB_017513ff;
LAB_017512ea:
          if (*(int *)(lVar32 + 0x30 + lVar31 * 4) == 0) {
            if (piVar4[0xc] == 0) goto LAB_01751305;
            goto LAB_017513ff;
          }
          if (piVar4[0xc] == 0) goto LAB_017513ff;
LAB_01751305:
          if (*(int *)(lVar32 + 0x34 + lVar31 * 4) == 0) {
            if (piVar4[0xd] == 0) goto LAB_01751320;
            goto LAB_017513ff;
          }
          if (piVar4[0xd] == 0) goto LAB_017513ff;
LAB_01751320:
          if (*(int *)(lVar32 + 0x38 + lVar31 * 4) == 0) {
            if (piVar4[0xe] == 0) goto LAB_0175133b;
            goto LAB_017513ff;
          }
          if (piVar4[0xe] == 0) goto LAB_017513ff;
LAB_0175133b:
          if (*(int *)(lVar32 + 0x3c + lVar31 * 4) == 0) {
            if (piVar4[0xf] == 0) goto LAB_01751356;
            goto LAB_017513ff;
          }
          if (piVar4[0xf] == 0) goto LAB_017513ff;
LAB_01751356:
          if (*(int *)(lVar32 + 0x40 + lVar31 * 4) == 0) {
            if (piVar4[0x10] == 0) goto LAB_01751371;
            goto LAB_017513ff;
          }
          if (piVar4[0x10] == 0) goto LAB_017513ff;
LAB_01751371:
          if (*(int *)(lVar32 + 0x44 + lVar31 * 4) == 0) {
            if (piVar4[0x11] == 0) goto LAB_01751385;
            goto LAB_017513ff;
          }
          if (piVar4[0x11] == 0) goto LAB_017513ff;
LAB_01751385:
          if (*(int *)(lVar32 + 0x48 + lVar31 * 4) == 0) {
            if (piVar4[0x12] == 0) goto LAB_01751399;
            goto LAB_017513ff;
          }
          if (piVar4[0x12] == 0) goto LAB_017513ff;
LAB_01751399:
          if (*(int *)(lVar32 + 0x4c + lVar31 * 4) == 0) {
            if (piVar4[0x13] == 0) goto LAB_017513ad;
            goto LAB_017513ff;
          }
          if (piVar4[0x13] == 0) goto LAB_017513ff;
LAB_017513ad:
          if (*(int *)(lVar32 + 0x50 + lVar31 * 4) == 0) {
            if (piVar4[0x14] == 0) goto LAB_017513c1;
            goto LAB_017513ff;
          }
          if (piVar4[0x14] == 0) goto LAB_017513ff;
LAB_017513c1:
          if (*(int *)(lVar32 + 0x54 + lVar31 * 4) == 0) {
            if (piVar4[0x15] == 0) goto LAB_017513d5;
            goto LAB_017513ff;
          }
          if (piVar4[0x15] == 0) goto LAB_017513ff;
LAB_017513d5:
          if (*(int *)(lVar32 + 0x58 + lVar31 * 4) == 0) {
            if (piVar4[0x16] == 0) goto LAB_017513e9;
            goto LAB_017513ff;
          }
          if (piVar4[0x16] == 0) goto LAB_017513ff;
LAB_017513e9:
          if (*(int *)(lVar32 + 0x5c + lVar31 * 4) == 0) {
            if (piVar4[0x17] != 0) goto LAB_017513ff;
          }
          else if (piVar4[0x17] == 0) goto LAB_017513ff;
LAB_01751190:
          lVar31 = lVar31 + 1;
        } while (lVar31 != 0x18);
        uVar34 = CONCAT71((int7)((ulonglong)lVar33 >> 8),1);
        if (local_40 != 0) {
LAB_01751406:
          FUN_00d50b20();
        }
LAB_0175140e:
        if (local_40 != 0) {
          FUN_00d50b20();
          FUN_00d50b20();
        }
        goto LAB_01751017;
      }
    }
  }
  uVar34 = 0;
LAB_01751017:
  return uVar34 & 0xffffffff;
}


