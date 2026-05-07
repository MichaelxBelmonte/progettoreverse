// Function: FUN_009dada4
// Address: 009dada4
// Size: 5760 bytes
// Class: MUSpectrumShaper
// String references:
//   "The recursive sub-expression refers to an invalid marking group, or is unterminated."
//   "An invalid or unterminated recursive sub-expression."
//   "Unterminated named capture."
//   "DEFINE"
//   "Invalid alternation operators within (?...) block."
//   "Invalid or empty zero width assertion."
//   "More than one alternation operator | was encountered inside a conditional expression."
//   "Alternation operators are not allowed inside a DEFINE block."
//   "A repetition operator cannot be applied to a zero-width assertion."


byte * FUN_009dada4(void)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  byte *pbVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined7 uVar18;
  byte *pbVar16;
  _Unwind_Exception *exception_object;
  byte **ppbVar17;
  uint uVar19;
  byte *pbVar20;
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  byte *pbVar24;
  longlong *unaff_RDI;
  byte *pbVar25;
  byte bVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined *puVar29;
  byte bVar30;
  uint uVar31;
  bool bVar32;
  bool bVar33;
  byte *local_70;
  undefined8 local_68;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  byte local_31;
  
  plVar1 = unaff_RDI + 0x11;
  pbVar9 = (byte *)unaff_RDI[0x10];
  pbVar20 = (byte *)unaff_RDI[0x11];
  pbVar16 = pbVar20 + 1;
  unaff_RDI[0x11] = (longlong)pbVar16;
  if (pbVar16 == pbVar9) {
    lVar11 = *(longlong *)unaff_RDI[1];
    do {
      *plVar1 = (longlong)pbVar20;
      pbVar16 = (byte *)(ulonglong)*pbVar20;
      pbVar20 = pbVar20 + -1;
    } while (pbVar16[lVar11 + 0x20] != 1);
    goto LAB_009dae2d;
  }
  lVar11 = *(longlong *)unaff_RDI[1];
  if (*(char *)(lVar11 + 0x20 + (ulonglong)*pbVar16) == '\r') {
    pbVar20 = pbVar9 + ~(ulonglong)pbVar20;
    do {
      pbVar9 = (byte *)CONCAT71((int7)((ulonglong)pbVar9 >> 8),1);
      if (pbVar20 == (byte *)0x0) {
        return pbVar9;
      }
      *plVar1 = (longlong)(pbVar16 + 1);
      bVar26 = *pbVar16;
      pbVar20 = pbVar20 + -1;
      pbVar16 = pbVar16 + 1;
    } while (*(char *)(lVar11 + 0x20 + (ulonglong)bVar26) != '\x02');
    return pbVar9;
  }
  local_48 = unaff_RDI + 1;
  lVar8 = FUN_009d8a9c(pbVar16,0x18);
  lVar11 = *unaff_RDI;
  uVar19 = *(uint *)(lVar11 + 0x28);
  bVar4 = (byte)(uVar19 >> 0x14) & 1;
  *(byte *)(lVar8 + 0x14) = bVar4;
  lVar2 = *(longlong *)(lVar11 + 0x160);
  lVar12 = unaff_RDI[0x15];
  uVar15 = (*(longlong *)(lVar11 + 0x168) - lVar2) + 7U & 0xfffffffffffffff8;
  *(ulonglong *)(lVar11 + 0x168) = lVar2 + uVar15;
  unaff_RDI[0x15] = uVar15;
  bVar26 = *(byte *)(unaff_RDI + 0x16);
  *(undefined1 *)(unaff_RDI + 0x16) = 0;
  uVar27 = *(undefined4 *)((longlong)unaff_RDI + 0x94);
  uVar28 = (undefined4)unaff_RDI[0x13];
  *(undefined4 *)((longlong)unaff_RDI + 0x94) = 0xffffffff;
  iVar22 = (int)unaff_RDI[0x12];
  *(int *)(unaff_RDI + 0x13) = iVar22;
  pbVar20 = (byte *)unaff_RDI[0x11];
  bVar30 = *pbVar20;
  lVar11 = *(longlong *)unaff_RDI[1];
  cVar5 = *(char *)(lVar11 + 0x20 + (ulonglong)bVar30);
  uVar18 = (undefined7)(uVar15 >> 8);
  pbVar16 = (byte *)CONCAT71(uVar18,cVar5);
  if (cVar5 < '\v') {
    if (cVar5 == '\x01') {
      *(undefined4 *)(lVar8 + 0x10) = 0xfffffffc;
      unaff_RDI[0x11] = (longlong)(pbVar20 + 1);
      pbVar16 = (byte *)unaff_RDI[0x10];
      if (pbVar20 + 1 == pbVar16) {
        do {
          *plVar1 = (longlong)pbVar20;
          bVar26 = *pbVar20;
          pbVar20 = pbVar20 + -1;
        } while (*(char *)(lVar11 + 0x20 + (ulonglong)bVar26) != '\x01');
      }
      else {
        local_58 = lVar12;
        local_3c = uVar27;
        local_38 = uVar28;
        local_31 = bVar26;
        lVar11 = FUN_009dcab0(10,pbVar16);
        pbVar9 = (byte *)unaff_RDI[0x10];
        pbVar20 = (byte *)unaff_RDI[0x11];
        if (pbVar20 != pbVar9) {
          bVar26 = *pbVar20;
          if ('C' < (char)bVar26) {
            if (bVar26 == 0x52) {
              pbVar16 = pbVar20 + 1;
              *plVar1 = (longlong)pbVar16;
              if (pbVar16 == pbVar9) {
                lVar11 = *(longlong *)*local_48;
                do {
                  *plVar1 = (longlong)pbVar20;
                  pbVar16 = (byte *)(ulonglong)*pbVar20;
                  pbVar20 = pbVar20 + -1;
                } while (pbVar16[lVar11 + 0x20] != 1);
              }
              else {
                if (*pbVar16 == 0x26) {
                  pbVar24 = pbVar20 + 2;
                  *plVar1 = (longlong)pbVar24;
                  pbVar16 = *(byte **)*local_48;
                  if (pbVar24 != pbVar9) {
                    pbVar25 = (byte *)0x0;
LAB_009dba84:
                    if (pbVar16[(ulonglong)pbVar24[(longlong)pbVar25] + 0x20] != 2)
                    goto code_r0x009dba93;
                    if (pbVar25 == (byte *)0x0) {
                      puVar29 = &DAT_00002710;
                    }
                    else {
                      uVar21 = 0;
                      do {
                        uVar21 = (uVar21 >> 2) + uVar21 * 0x40 + 0x9e3779b9 +
                                 (longlong)(char)*pbVar24 ^ uVar21;
                        pbVar24 = pbVar24 + 1;
                        pbVar25 = pbVar25 + -1;
                      } while (pbVar25 != (byte *)0x0);
                      puVar29 = &DAT_00002710 + uVar21 % 0x7fffd8ee;
                    }
                    lVar11 = -((longlong)puVar29 << 0x20) >> 0x20;
                    goto LAB_009dc30b;
                  }
LAB_009dbaa3:
                  pbVar9 = pbVar9 + -1;
                  do {
                    *plVar1 = (longlong)pbVar9;
                    bVar26 = *pbVar9;
                    pbVar9 = pbVar9 + -1;
                  } while (pbVar16[(ulonglong)bVar26 + 0x20] != 1);
                  goto LAB_009db843;
                }
                lVar11 = FUN_009dcab0(10,pbVar9);
                lVar11 = -lVar11;
LAB_009dc30b:
                lVar12 = FUN_009d8a9c();
                *(uint *)(lVar12 + 0x10) = (uint)(lVar11 >> 0x3f) & (int)lVar11 - 1U;
                pbVar20 = (byte *)unaff_RDI[0x11];
                pbVar9 = *(byte **)unaff_RDI[1];
                if (pbVar9[(ulonglong)*pbVar20 + 0x20] == 2) {
                  unaff_RDI[0x11] = (longlong)(pbVar20 + 1);
                  if (pbVar20 + 1 != (byte *)unaff_RDI[0x10]) goto LAB_009dc3a5;
                  do {
                    *plVar1 = (longlong)pbVar20;
                    pbVar16 = (byte *)(ulonglong)*pbVar20;
                    pbVar20 = pbVar20 + -1;
                  } while ((pbVar9 + 0x20)[(longlong)pbVar16] != 1);
                }
                else {
                  pbVar20 = pbVar20 + -1;
                  do {
                    *plVar1 = (longlong)pbVar20;
                    pbVar16 = (byte *)(ulonglong)*pbVar20;
                    pbVar20 = pbVar20 + -1;
                  } while ((pbVar9 + 0x20)[(longlong)pbVar16] != 1);
                }
              }
            }
            else {
              if (bVar26 != 0x44) goto LAB_009db9db;
              lVar11 = -6;
              bVar32 = false;
              bVar26 = 0x44;
              do {
                if (pbVar9 == pbVar20) goto LAB_009dbbf8;
                if (*pbVar20 != bVar26) break;
                pbVar20 = pbVar20 + 1;
                *plVar1 = (longlong)pbVar20;
                bVar26 = "Invalid alternation operators within (?...) block."[lVar11];
                bVar32 = bVar26 == 0;
                lVar11 = lVar11 + 1;
              } while (lVar11 != 0);
              bVar33 = pbVar20 == pbVar9;
              pbVar9 = pbVar20;
              if ((bVar33) || (!bVar32)) {
LAB_009dbbf8:
                lVar11 = *(longlong *)*local_48;
                pbVar20 = pbVar9 + -1;
                do {
                  *plVar1 = (longlong)pbVar20;
                  pbVar16 = (byte *)(ulonglong)*pbVar20;
                  pbVar20 = pbVar20 + -1;
                } while (pbVar16[lVar11 + 0x20] != 1);
              }
              else {
                lVar11 = FUN_009d8a9c(bVar26,0x18);
                *(undefined4 *)(lVar11 + 0x10) = 9999;
                pbVar20 = (byte *)unaff_RDI[0x11];
                pbVar9 = *(byte **)unaff_RDI[1];
                if (pbVar9[(ulonglong)*pbVar20 + 0x20] == 2) {
                  unaff_RDI[0x11] = (longlong)(pbVar20 + 1);
                  if (pbVar20 + 1 != (byte *)unaff_RDI[0x10]) goto LAB_009dc3a5;
                  do {
                    *plVar1 = (longlong)pbVar20;
                    pbVar16 = (byte *)(ulonglong)*pbVar20;
                    pbVar20 = pbVar20 + -1;
                  } while ((pbVar9 + 0x20)[(longlong)pbVar16] != 1);
                }
                else {
                  pbVar20 = pbVar20 + -1;
                  do {
                    *plVar1 = (longlong)pbVar20;
                    pbVar16 = (byte *)(ulonglong)*pbVar20;
                    pbVar20 = pbVar20 + -1;
                  } while ((pbVar9 + 0x20)[(longlong)pbVar16] != 1);
                }
              }
            }
            goto LAB_009dae2d;
          }
          if ((bVar26 == 0x27) || (bVar26 == 0x3c)) {
            pbVar16 = pbVar20 + 1;
            *plVar1 = (longlong)pbVar16;
            if (pbVar16 != pbVar9) {
              pbVar24 = (byte *)0x0;
LAB_009db397:
              if ((pbVar16[(longlong)pbVar24] != 0x27) && (pbVar16[(longlong)pbVar24] != 0x3e))
              goto code_r0x009db3ac;
              if (pbVar24 == (byte *)0x0) {
                iVar22 = 10000;
              }
              else {
                uVar21 = 0;
                do {
                  uVar21 = (uVar21 >> 2) + uVar21 * 0x40 + 0x9e3779b9 + (longlong)(char)*pbVar16 ^
                           uVar21;
                  pbVar16 = pbVar16 + 1;
                  pbVar24 = pbVar24 + -1;
                } while (pbVar24 != (byte *)0x0);
                pbVar16 = (byte *)0x200009c482fb3f8b;
                iVar22 = (int)uVar21 + (int)(uVar21 / 0x7fffd8ee) * -0x7fffd8ee + 10000;
              }
              lVar11 = FUN_009d8a9c(pbVar16,0x18);
              *(int *)(lVar11 + 0x10) = iVar22;
              pbVar24 = (byte *)unaff_RDI[0x11];
              if ((*pbVar24 != 0x3e) && (pbVar20 = pbVar24, *pbVar24 != 0x27)) {
LAB_009dc24f:
                lVar11 = *(longlong *)*local_48;
                pbVar20 = pbVar20 + -1;
                do {
                  *plVar1 = (longlong)pbVar20;
                  bVar26 = *pbVar20;
                  pbVar20 = pbVar20 + -1;
                } while (*(char *)(lVar11 + 0x20 + (ulonglong)bVar26) != '\x01');
                lVar11 = unaff_RDI[0xf];
                ppbVar17 = &local_70;
                FUN_009d5ed0();
                FUN_009d8cfc(ppbVar17,pbVar20 + (1 - lVar11));
                goto LAB_009dbe96;
              }
              pbVar20 = pbVar24 + 1;
              unaff_RDI[0x11] = (longlong)pbVar20;
              if (pbVar20 == (byte *)unaff_RDI[0x10]) goto LAB_009dc24f;
              pbVar9 = *(byte **)*local_48;
              if (pbVar9[(ulonglong)*pbVar20 + 0x20] != 2) {
                do {
                  *plVar1 = (longlong)pbVar24;
                  pbVar16 = (byte *)(ulonglong)*pbVar24;
                  pbVar24 = pbVar24 + -1;
                } while ((pbVar9 + 0x20)[(longlong)pbVar16] != 1);
                pbVar20 = pbVar24 + (1 - unaff_RDI[0xf]);
                goto LAB_009dae3c;
              }
              *plVar1 = (longlong)(pbVar24 + 2);
              if (pbVar24 + 2 != (byte *)unaff_RDI[0x10]) goto LAB_009dc3a5;
              do {
                *plVar1 = (longlong)pbVar20;
                pbVar16 = (byte *)(ulonglong)*pbVar20;
                pbVar20 = pbVar20 + -1;
              } while ((pbVar9 + 0x20)[(longlong)pbVar16] != 1);
              goto LAB_009dae2d;
            }
LAB_009db3bc:
            pbVar16 = *(byte **)*local_48;
            pbVar9 = pbVar9 + -1;
            do {
              *plVar1 = (longlong)pbVar9;
              bVar26 = *pbVar9;
              pbVar9 = pbVar9 + -1;
            } while (pbVar16[(ulonglong)bVar26 + 0x20] != 1);
            goto LAB_009db843;
          }
LAB_009db9db:
          if (lVar11 < 1) {
            pbVar16 = (byte *)(ulonglong)bVar26;
            lVar11 = *(longlong *)*local_48;
            if (pbVar16[lVar11 + 0x20] == 8) {
              pbVar16 = pbVar20 + 1;
              *plVar1 = (longlong)pbVar16;
              if (pbVar16 == pbVar9) {
                do {
                  *plVar1 = (longlong)pbVar20;
                  bVar26 = *pbVar20;
                  pbVar20 = pbVar20 + -1;
                } while (*(char *)(lVar11 + 0x20 + (ulonglong)bVar26) != '\x01');
              }
              else {
                cVar5 = *(char *)(lVar11 + 0x20 + (ulonglong)*pbVar16);
                if (cVar5 == '\x14') {
                  pbVar24 = pbVar20 + 2;
                  *plVar1 = (longlong)pbVar24;
                  if (pbVar24 == pbVar9) {
                    do {
                      *plVar1 = (longlong)pbVar16;
                      bVar26 = *pbVar16;
                      pbVar16 = pbVar16 + -1;
                    } while (*(char *)(lVar11 + 0x20 + (ulonglong)bVar26) != '\x01');
                  }
                  else {
                    pbVar9 = (byte *)0x0;
                    if ((*(byte *)(lVar11 + 0x20 + (ulonglong)*pbVar24) | 0x10) == 0x35)
                    goto LAB_009dc39e;
                    do {
                      *plVar1 = (longlong)pbVar16;
                      bVar26 = *pbVar16;
                      pbVar16 = pbVar16 + -1;
                    } while (*(char *)(lVar11 + 0x20 + (ulonglong)bVar26) != '\x01');
                  }
                  pbVar16 = pbVar16 + (1 - unaff_RDI[0xf]);
                  pbVar20 = pbVar16;
                  goto LAB_009dae3c;
                }
                if ((cVar5 == '%') || (cVar5 == '5')) {
LAB_009dc39e:
                  *plVar1 = (longlong)(pbVar20 + -1);
                  goto LAB_009dc3a5;
                }
                do {
                  *plVar1 = (longlong)pbVar20;
                  bVar26 = *pbVar20;
                  pbVar20 = pbVar20 + -1;
                } while (*(char *)(lVar11 + 0x20 + (ulonglong)bVar26) != '\x01');
              }
            }
            else {
              pbVar20 = pbVar20 + -1;
              do {
                *plVar1 = (longlong)pbVar20;
                bVar26 = *pbVar20;
                pbVar20 = pbVar20 + -1;
              } while (*(char *)(lVar11 + 0x20 + (ulonglong)bVar26) != '\x01');
            }
            goto LAB_009dae2d;
          }
          lVar12 = FUN_009d8a9c(bVar26,0x18);
          *(int *)(lVar12 + 0x10) = (int)lVar11;
          pbVar20 = (byte *)unaff_RDI[0x11];
          pbVar9 = *(byte **)unaff_RDI[1];
          if (pbVar9[(ulonglong)*pbVar20 + 0x20] != 2) {
            pbVar20 = pbVar20 + -1;
            do {
              *plVar1 = (longlong)pbVar20;
              pbVar16 = (byte *)(ulonglong)*pbVar20;
              pbVar20 = pbVar20 + -1;
            } while ((pbVar9 + 0x20)[(longlong)pbVar16] != 1);
            goto LAB_009dae2d;
          }
          unaff_RDI[0x11] = (longlong)(pbVar20 + 1);
          if (pbVar20 + 1 == (byte *)unaff_RDI[0x10]) {
            do {
              *plVar1 = (longlong)pbVar20;
              pbVar16 = (byte *)(ulonglong)*pbVar20;
              pbVar20 = pbVar20 + -1;
            } while ((pbVar9 + 0x20)[(longlong)pbVar16] != 1);
            goto LAB_009dae2d;
          }
LAB_009dc3a5:
          iVar22 = -4;
          local_40 = (undefined4)CONCAT71((int7)((ulonglong)pbVar9 >> 8),1);
          local_50 = 0;
          goto LAB_009dbd0c;
        }
        lVar11 = *(longlong *)*local_48;
        pbVar20 = pbVar20 + -1;
        do {
          *plVar1 = (longlong)pbVar20;
          pbVar16 = (byte *)(ulonglong)*pbVar20;
          pbVar20 = pbVar20 + -1;
        } while (pbVar16[lVar11 + 0x20] != 1);
      }
    }
    else {
      if (cVar5 != '\x02') {
        if (cVar5 == '\a') {
          unaff_RDI[0x11] = (longlong)(pbVar20 + 1);
          local_58 = lVar12;
          local_3c = uVar27;
          local_38 = uVar28;
          local_31 = bVar26;
          lVar11 = FUN_009dcab0(10,unaff_RDI[0x10]);
          if (lVar11 < 1) {
            pbVar16 = (byte *)*plVar1;
            lVar12 = *(longlong *)*local_48;
          }
          else {
            pbVar16 = (byte *)*plVar1;
            lVar12 = *(longlong *)*local_48;
            if (*(char *)(lVar12 + 0x20 + (ulonglong)*pbVar16) == '\x02') {
              if ((longlong)((ulonglong)*(uint *)(unaff_RDI + 0x12) ^ 0x7fffffffffffffff) < lVar11)
              {
                lVar11 = unaff_RDI[0xf];
                ppbVar17 = &local_70;
                FUN_009d5ed0();
                FUN_009d8cfc(ppbVar17,(longlong)pbVar16 - lVar11);
                goto LAB_009dbe96;
              }
              puVar29 = (undefined *)(lVar11 + (ulonglong)*(uint *)(unaff_RDI + 0x12));
              goto LAB_009dbcb7;
            }
          }
          pbVar16 = pbVar16 + -1;
          do {
            *plVar1 = (longlong)pbVar16;
            bVar26 = *pbVar16;
            pbVar16 = pbVar16 + -1;
          } while (*(char *)(lVar12 + 0x20 + (ulonglong)bVar26) != '\x01');
          lVar11 = unaff_RDI[0xf];
          ppbVar17 = &local_70;
          FUN_009d5ed0();
          FUN_009d8cfc(ppbVar17,pbVar16 + (1 - lVar11));
          goto LAB_009dbe96;
        }
        goto switchD_009daf45_caseD_1;
      }
      pbVar20 = pbVar20 + -1;
      do {
        *plVar1 = (longlong)pbVar20;
        bVar26 = *pbVar20;
        pbVar20 = pbVar20 + -1;
      } while (*(char *)(lVar11 + 0x20 + (ulonglong)bVar26) != '\x01');
    }
LAB_009dae2d:
    pbVar20 = pbVar20 + (1 - unaff_RDI[0xf]);
LAB_009dae3c:
    FUN_009d86be(pbVar16,pbVar20);
    return (byte *)0x0;
  }
  if (cVar5 < '$') {
    bVar13 = cVar5 - 0xb;
    pbVar16 = (byte *)CONCAT71(uVar18,bVar13);
    if (0xe < bVar13) {
switchD_009daf45_caseD_1:
      if (bVar30 == 0x26) {
        pbVar16 = pbVar20 + 1;
        unaff_RDI[0x11] = (longlong)pbVar16;
        pbVar24 = (byte *)unaff_RDI[0x10];
        pbVar9 = pbVar16;
        if (pbVar16 != pbVar24) {
          pbVar25 = (byte *)0x0;
LAB_009db698:
          if (*(char *)(lVar11 + 0x20 + (ulonglong)pbVar16[(longlong)pbVar25]) != '\x02')
          goto code_r0x009db6a7;
          if (pbVar25 == (byte *)0x0) {
LAB_009dbcb1:
            puVar29 = &DAT_00002710;
            local_58 = lVar12;
            local_3c = uVar27;
            local_38 = uVar28;
            local_31 = bVar26;
          }
          else {
            uVar21 = 0;
            do {
              uVar21 = (uVar21 >> 2) + uVar21 * 0x40 + 0x9e3779b9 + (longlong)(char)*pbVar16 ^
                       uVar21;
              pbVar16 = pbVar16 + 1;
              pbVar25 = pbVar25 + -1;
            } while (pbVar25 != (byte *)0x0);
LAB_009dbc89:
            puVar29 = &DAT_00002710 + uVar21 % 0x7fffd8ee;
            local_58 = lVar12;
            local_3c = uVar27;
            local_38 = uVar28;
            local_31 = bVar26;
          }
          goto LAB_009dbcb7;
        }
LAB_009db6ba:
        pbVar9 = pbVar9 + -1;
        do {
          *plVar1 = (longlong)pbVar9;
          pbVar16 = (byte *)(ulonglong)*pbVar9;
          pbVar9 = pbVar9 + -1;
          local_31 = bVar26;
        } while (pbVar16[lVar11 + 0x20] != 1);
      }
      else {
        if (bVar30 != 0x50) {
          local_58 = lVar12;
          local_3c = uVar27;
          local_38 = uVar28;
          local_31 = bVar26;
          if (bVar30 == 0x52) {
            *plVar1 = (longlong)(pbVar20 + 1);
            if (*(char *)(lVar11 + 0x20 + (ulonglong)pbVar20[1]) == '\x02') {
              puVar29 = (undefined *)0x0;
              goto LAB_009dbcb7;
            }
            do {
              *plVar1 = (longlong)pbVar20;
              bVar30 = *pbVar20;
              pbVar20 = pbVar20 + -1;
            } while (*(char *)(lVar11 + 0x20 + (ulonglong)bVar30) != '\x01');
          }
          else {
LAB_009db4c9:
            uVar6 = FUN_009dce6c();
            pbVar20 = (byte *)unaff_RDI[0x11];
            if (pbVar20 != (byte *)unaff_RDI[0x10]) {
              uVar31 = uVar6 & 0x100000;
              lVar11 = *unaff_RDI;
              uVar14 = *(uint *)(lVar11 + 0x28) & 0x100000;
              pbVar16 = (byte *)(ulonglong)uVar14;
              *(bool *)(unaff_RDI + 0x16) = uVar31 != uVar14;
              *(undefined4 *)(lVar8 + 0x10) = 0;
              lVar12 = *(longlong *)unaff_RDI[1];
              cVar5 = *(char *)(lVar12 + 0x20 + (ulonglong)*pbVar20);
              if (cVar5 == '\x02') {
                *(uint *)(lVar11 + 0x28) = uVar6;
                uVar6 = uVar6 >> 0x14 & 1;
                if (uVar6 != *(byte *)(unaff_RDI + 3)) {
                  *(char *)(unaff_RDI + 3) = (char)uVar6;
                }
                local_31 = local_31 | uVar31 != uVar14;
                local_40 = 0;
              }
              else {
                if (cVar5 != '$') {
                  pbVar20 = pbVar20 + -1;
                  do {
                    *plVar1 = (longlong)pbVar20;
                    bVar26 = *pbVar20;
                    pbVar20 = pbVar20 + -1;
                  } while (*(char *)(lVar12 + 0x20 + (ulonglong)bVar26) != '\x01');
                  goto LAB_009dae2d;
                }
                *(uint *)(lVar11 + 0x28) = uVar6;
                uVar6 = uVar6 >> 0x14 & 1;
                if (uVar6 != *(byte *)(unaff_RDI + 3)) {
                  *(char *)(unaff_RDI + 3) = (char)uVar6;
                }
                *plVar1 = (longlong)(pbVar20 + 1);
                local_40 = 1;
              }
              if (uVar31 != uVar14) {
                lVar11 = FUN_009d8a9c(pbVar16,0x18);
                *(char *)(lVar11 + 0x10) = (char)(uVar31 >> 0x14);
              }
              local_50 = 0;
              goto LAB_009dbd09;
            }
            lVar11 = *(longlong *)*local_48;
            pbVar20 = pbVar20 + -1;
            do {
              *plVar1 = (longlong)pbVar20;
              pbVar16 = (byte *)(ulonglong)*pbVar20;
              pbVar20 = pbVar20 + -1;
            } while (pbVar16[lVar11 + 0x20] != 1);
          }
          goto LAB_009dae2d;
        }
        pbVar9 = pbVar20 + 1;
        unaff_RDI[0x11] = (longlong)pbVar9;
        pbVar24 = (byte *)unaff_RDI[0x10];
        if (pbVar9 == pbVar24) {
          do {
            *plVar1 = (longlong)pbVar20;
            bVar30 = *pbVar20;
            pbVar20 = pbVar20 + -1;
            local_31 = bVar26;
          } while (*(char *)(lVar11 + 0x20 + (ulonglong)bVar30) != '\x01');
          goto LAB_009dae2d;
        }
        local_58 = lVar12;
        local_3c = uVar27;
        local_38 = uVar28;
        local_31 = bVar26;
        if (*pbVar9 != 0x3e) goto LAB_009db4c9;
        pbVar16 = pbVar20 + 2;
        *plVar1 = (longlong)pbVar16;
        pbVar9 = pbVar16;
        if (pbVar16 != pbVar24) {
          pbVar25 = (byte *)0x0;
LAB_009db620:
          if (*(char *)(lVar11 + 0x20 + (ulonglong)pbVar16[(longlong)pbVar25]) != '\x02')
          goto code_r0x009db62f;
          if (pbVar25 != (byte *)0x0) {
            uVar21 = 0;
            do {
              uVar21 = (uVar21 >> 2) + uVar21 * 0x40 + 0x9e3779b9 + (longlong)(char)*pbVar16 ^
                       uVar21;
              pbVar16 = pbVar16 + 1;
              pbVar25 = pbVar25 + -1;
            } while (pbVar25 != (byte *)0x0);
            goto LAB_009dbc89;
          }
          goto LAB_009dbcb1;
        }
LAB_009db642:
        pbVar9 = pbVar9 + -1;
        do {
          *plVar1 = (longlong)pbVar9;
          pbVar16 = (byte *)(ulonglong)*pbVar9;
          pbVar9 = pbVar9 + -1;
        } while (pbVar16[lVar11 + 0x20] != 1);
      }
LAB_009db843:
      pbVar20 = pbVar9 + (1 - unaff_RDI[0xf]);
      goto LAB_009dae3c;
    }
    pbVar16 = (byte *)((longlong)&switchD_009daf45::switchdataD_009dc434 +
                      (longlong)(int)(&switchD_009daf45::switchdataD_009dc434)[bVar13]);
    switch(bVar13) {
    case 0:
      *(int *)((longlong)unaff_RDI + 0x94) = iVar22;
      goto LAB_009db0a4;
    default:
      goto switchD_009daf45_caseD_1;
    case 3:
      unaff_RDI[0x11] = (longlong)(pbVar20 + 1);
      local_58 = lVar12;
      local_3c = uVar27;
      local_38 = uVar28;
      local_31 = bVar26;
      lVar11 = FUN_009dcab0(10,unaff_RDI[0x10]);
      if (lVar11 < 1) {
        *plVar1 = *plVar1 + -1;
        goto LAB_009db4c9;
      }
      uVar21 = (ulonglong)((int)unaff_RDI[0x12] + 1);
      puVar29 = (undefined *)(uVar21 - lVar11);
      if (puVar29 == (undefined *)0x0 || (longlong)uVar21 < lVar11) {
        lVar11 = *(longlong *)*local_48;
        pbVar16 = (byte *)(*plVar1 + -1);
        do {
          *plVar1 = (longlong)pbVar16;
          bVar26 = *pbVar16;
          pbVar16 = pbVar16 + -1;
        } while (*(char *)(lVar11 + 0x20 + (ulonglong)bVar26) != '\x01');
        lVar11 = unaff_RDI[0xf];
        ppbVar17 = &local_70;
        FUN_009d5ed0();
        FUN_009d8cfc(ppbVar17,pbVar16 + (1 - lVar11));
        goto LAB_009dbe96;
      }
LAB_009dbcb7:
      *(undefined4 *)(lVar8 + 0x10) = 0;
      lVar11 = FUN_009d8a9c();
      *(undefined **)(lVar11 + 0x10) = puVar29;
      local_50 = 0;
      *(undefined4 *)(lVar11 + 0x18) = 0;
      uVar6 = *(uint *)(*unaff_RDI + 0x28);
      lVar11 = FUN_009d8a9c(0,0x18);
      *(byte *)(lVar11 + 0x10) = (byte)(uVar6 >> 0x14) & 1;
      goto LAB_009dbd04;
    case 6:
      local_58 = lVar12;
      local_3c = uVar27;
      local_38 = uVar28;
      local_31 = bVar26;
      puVar29 = (undefined *)FUN_009dcab0(10,unaff_RDI[0x10]);
      if ((longlong)puVar29 < 0) {
        pbVar16 = (byte *)*plVar1;
        lVar11 = *(longlong *)*local_48;
      }
      else {
        pbVar16 = (byte *)*plVar1;
        lVar11 = *(longlong *)*local_48;
        if (*(char *)(lVar11 + 0x20 + (ulonglong)*pbVar16) == '\x02') goto LAB_009dbcb7;
      }
      pbVar16 = pbVar16 + -1;
      do {
        *plVar1 = (longlong)pbVar16;
        bVar26 = *pbVar16;
        pbVar16 = pbVar16 + -1;
      } while (*(char *)(lVar11 + 0x20 + (ulonglong)bVar26) != '\x01');
      lVar11 = unaff_RDI[0xf];
      ppbVar17 = &local_70;
      FUN_009d5ed0();
      FUN_009d8cfc(ppbVar17,pbVar16 + (1 - lVar11));
      goto LAB_009dbe96;
    case 9:
      pbVar9 = pbVar20 + 1;
      unaff_RDI[0x11] = (longlong)pbVar9;
      if (pbVar9 == (byte *)unaff_RDI[0x10]) {
        do {
          *plVar1 = (longlong)pbVar20;
          bVar26 = *pbVar20;
          pbVar20 = pbVar20 + -1;
        } while (*(char *)(lVar11 + 0x20 + (ulonglong)bVar26) != '\x01');
        goto LAB_009dae2d;
      }
      cVar5 = *(char *)(lVar11 + 0x20 + (ulonglong)*pbVar9);
      if (cVar5 == '5') {
        iVar22 = -2;
      }
      else {
        if (cVar5 != '%') {
          *plVar1 = (longlong)pbVar20;
          bVar30 = 0x3e;
          goto switchD_009daf45_caseD_e;
        }
        iVar22 = -1;
      }
      *(int *)(lVar8 + 0x10) = iVar22;
      unaff_RDI[0x11] = (longlong)(pbVar20 + 2);
      local_58 = lVar12;
      local_3c = uVar27;
      local_38 = uVar28;
      local_31 = bVar26;
      local_50 = FUN_009d8a9c(pbVar16,0x18);
      local_50 = local_50 - *(longlong *)(*unaff_RDI + 0x160);
      FUN_009d8a9c(*unaff_RDI,0x18);
      lVar23 = *unaff_RDI;
      uVar21 = (*(longlong *)(lVar23 + 0x168) - *(longlong *)(lVar23 + 0x160)) + 7U &
               0xfffffffffffffff8;
      *(ulonglong *)(lVar23 + 0x168) = *(longlong *)(lVar23 + 0x160) + uVar21;
      unaff_RDI[0x15] = uVar21;
      break;
    case 10:
      *(undefined4 *)(lVar8 + 0x10) = 0xfffffffd;
      unaff_RDI[0x11] = (longlong)(pbVar20 + 1);
      local_58 = lVar12;
      local_3c = uVar27;
      local_38 = uVar28;
      local_31 = bVar26;
      lVar23 = FUN_009d8a9c(pbVar16,0x18);
      lVar11 = *unaff_RDI;
      lVar12 = *(longlong *)(lVar11 + 0x160);
      lVar23 = lVar23 - lVar12;
      uVar21 = (*(longlong *)(lVar11 + 0x168) - lVar12) + 7U & 0xfffffffffffffff8;
      *(ulonglong *)(lVar11 + 0x168) = lVar12 + uVar21;
      unaff_RDI[0x15] = uVar21;
      iVar22 = -3;
      local_50 = lVar23;
      break;
    case 0xe:
switchD_009daf45_caseD_e:
      if ((uVar19 >> 0x16 & 1) == 0) {
        iVar22 = iVar22 + 1;
        *(int *)(unaff_RDI + 0x12) = iVar22;
        if ((uVar19 >> 0x17 & 1) != 0) {
          local_70 = pbVar20 + (-2 - unaff_RDI[0xf]);
          local_68 = 0;
          local_58 = lVar12;
          local_3c = uVar27;
          local_38 = uVar28;
          local_31 = bVar26;
          FUN_009dc95a();
          pbVar20 = (byte *)unaff_RDI[0x11];
          lVar12 = local_58;
          uVar27 = local_3c;
          uVar28 = local_38;
          bVar26 = local_31;
        }
      }
      else {
        iVar22 = 0;
      }
      *(int *)(lVar8 + 0x10) = iVar22;
      pbVar16 = pbVar20 + 1;
      unaff_RDI[0x11] = (longlong)pbVar16;
      pbVar9 = (byte *)unaff_RDI[0x10];
      if (pbVar16 == pbVar9) {
        lVar11 = *(longlong *)*local_48;
        do {
          *plVar1 = (longlong)pbVar20;
          pbVar16 = (byte *)(ulonglong)*pbVar20;
          pbVar20 = pbVar20 + -1;
        } while (pbVar16[lVar11 + 0x20] != 1);
        goto LAB_009dae2d;
      }
      do {
        if (*pbVar16 == bVar30) {
          local_58 = lVar12;
          local_3c = uVar27;
          local_38 = uVar28;
          local_31 = bVar26;
          uVar10 = FUN_009dccaa(iVar22);
          unaff_RDI[0x11] = unaff_RDI[0x11] + 1;
          local_40 = (undefined4)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
          local_50 = 0;
          goto LAB_009dbd0c;
        }
        pbVar16 = pbVar16 + 1;
        *plVar1 = (longlong)pbVar16;
      } while (pbVar9 != pbVar16);
      pbVar16 = *(byte **)*local_48;
      pbVar9 = pbVar9 + -1;
      do {
        *plVar1 = (longlong)pbVar9;
        bVar26 = *pbVar9;
        pbVar9 = pbVar9 + -1;
      } while (pbVar16[(ulonglong)bVar26 + 0x20] != 1);
      goto LAB_009db843;
    }
LAB_009db77a:
    local_40 = (undefined4)CONCAT71((int7)((ulonglong)lVar23 >> 8),1);
  }
  else {
    if (cVar5 != '$') {
      if (cVar5 == '%') {
        *(undefined4 *)(lVar8 + 0x10) = 0xffffffff;
        unaff_RDI[0x11] = (longlong)(pbVar20 + 1);
        local_58 = lVar12;
        local_3c = uVar27;
        local_38 = uVar28;
        local_31 = bVar26;
        lVar23 = FUN_009d8a9c(pbVar16,0x18);
        lVar11 = *unaff_RDI;
        lVar12 = *(longlong *)(lVar11 + 0x160);
        lVar23 = lVar23 - lVar12;
        uVar21 = (*(longlong *)(lVar11 + 0x168) - lVar12) + 7U & 0xfffffffffffffff8;
        *(ulonglong *)(lVar11 + 0x168) = lVar12 + uVar21;
        unaff_RDI[0x15] = uVar21;
        iVar22 = -1;
        local_50 = lVar23;
      }
      else {
        if (cVar5 != '5') goto switchD_009daf45_caseD_1;
        *(undefined4 *)(lVar8 + 0x10) = 0xfffffffe;
        unaff_RDI[0x11] = (longlong)(pbVar20 + 1);
        local_58 = lVar12;
        local_3c = uVar27;
        local_38 = uVar28;
        local_31 = bVar26;
        lVar23 = FUN_009d8a9c(pbVar16,0x18);
        lVar11 = *unaff_RDI;
        lVar12 = *(longlong *)(lVar11 + 0x160);
        lVar23 = lVar23 - lVar12;
        uVar21 = (*(longlong *)(lVar11 + 0x168) - lVar12) + 7U & 0xfffffffffffffff8;
        *(ulonglong *)(lVar11 + 0x168) = lVar12 + uVar21;
        unaff_RDI[0x15] = uVar21;
        iVar22 = -2;
        local_50 = lVar23;
      }
      goto LAB_009db77a;
    }
LAB_009db0a4:
    *(undefined4 *)(lVar8 + 0x10) = 0;
    *plVar1 = (longlong)(pbVar20 + 1);
    lVar11 = 0;
    local_50 = 0;
    local_58 = lVar12;
    local_3c = uVar27;
    local_38 = uVar28;
    local_31 = bVar26;
LAB_009dbd04:
    local_40 = (undefined4)CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
LAB_009dbd09:
    iVar22 = 0;
  }
LAB_009dbd0c:
  FUN_009d8d70();
  cVar5 = FUN_009d8e36();
  lVar11 = unaff_RDI[0x11];
  if (cVar5 == '\0') {
    lVar2 = *(longlong *)*local_48;
    pbVar16 = (byte *)(lVar11 + -1);
    do {
      *plVar1 = (longlong)pbVar16;
      bVar26 = *pbVar16;
      pbVar16 = pbVar16 + -1;
    } while (*(char *)(lVar2 + 0x20 + (ulonglong)bVar26) != '\x01');
    lVar11 = unaff_RDI[0xf];
    ppbVar17 = &local_70;
    FUN_009d5ed0();
    FUN_009d8cfc(ppbVar17,pbVar16 + (1 - lVar11));
    goto LAB_009dbe96;
  }
  if (lVar11 == unaff_RDI[0x10]) {
    lVar2 = *(longlong *)*local_48;
    pbVar16 = (byte *)(lVar11 + -1);
    do {
      *plVar1 = (longlong)pbVar16;
      bVar26 = *pbVar16;
      pbVar16 = pbVar16 + -1;
    } while (*(char *)(lVar2 + 0x20 + (ulonglong)bVar26) != '\x01');
    pbVar20 = (byte *)(lVar11 - unaff_RDI[0xf]);
    goto LAB_009dae3c;
  }
  *plVar1 = lVar11 + 1;
  if ((char)local_40 != '\0') {
    if ((char)unaff_RDI[0x16] != '\0') {
      lVar11 = FUN_009d8a9c();
      *(byte *)(lVar11 + 0x10) = bVar4;
    }
    *(uint *)(*unaff_RDI + 0x28) = uVar19;
    uVar19 = uVar19 >> 0x14 & 1;
    if (uVar19 != *(byte *)(unaff_RDI + 3)) {
      *(char *)(unaff_RDI + 3) = (char)uVar19;
    }
  }
  if (local_50 != 0) {
    lVar11 = *unaff_RDI;
    lVar12 = *(longlong *)(lVar11 + 0x160);
    uVar21 = (*(longlong *)(lVar11 + 0x168) - lVar12) + 7U & 0xfffffffffffffff8;
    *(ulonglong *)(lVar11 + 0x168) = lVar12 + uVar21;
    *(ulonglong *)(lVar12 + 0x10 + local_50) = (uVar21 - (lVar12 + local_50)) + lVar12;
    if ((iVar22 != -2) && (unaff_RDI[2] == lVar12 + local_50)) {
      lVar11 = *(longlong *)*local_48;
      pbVar16 = (byte *)(*plVar1 + -1);
      do {
        *plVar1 = (longlong)pbVar16;
        bVar26 = *pbVar16;
        pbVar16 = pbVar16 + -1;
      } while (*(char *)(lVar11 + 0x20 + (ulonglong)bVar26) != '\x01');
      lVar11 = unaff_RDI[0xf];
      ppbVar17 = &local_70;
      FUN_009d5ed0();
      FUN_009d8cfc(ppbVar17,pbVar16 + (1 - lVar11));
      goto LAB_009dbe96;
    }
  }
  if (iVar22 == -4) {
    lVar11 = *(longlong *)(*unaff_RDI + 0x160);
    if (*(int *)(lVar11 + uVar15) == 0x11) {
      lVar23 = uVar15 + lVar11;
      lVar12 = *(longlong *)(lVar23 + 0x10);
      if (((0 < lVar12) && ((lVar12 + lVar23) - lVar11 < *(longlong *)(*unaff_RDI + 0x168) - lVar11)
          ) && (*(int *)(lVar23 + lVar12) == 0x11)) {
        lVar11 = *(longlong *)*local_48;
        pbVar16 = (byte *)(*plVar1 + -1);
        do {
          *plVar1 = (longlong)pbVar16;
          bVar26 = *pbVar16;
          pbVar16 = pbVar16 + -1;
        } while (*(char *)(lVar11 + 0x20 + (ulonglong)bVar26) != '\x01');
        lVar11 = unaff_RDI[0xf];
        ppbVar17 = &local_70;
        FUN_009d5ed0();
        FUN_009d8cfc(ppbVar17,pbVar16 + (1 - lVar11));
        goto LAB_009dbe96;
      }
      iVar7 = *(int *)(lVar23 + *(longlong *)(lVar23 + 8));
      if (iVar7 == 0x1b) {
        if (*(int *)(lVar23 + 0x10 + *(longlong *)(lVar23 + 8)) != 9999) goto LAB_009dc03c;
        lVar11 = *(longlong *)*local_48;
        pbVar16 = (byte *)(*plVar1 + -1);
        do {
          *plVar1 = (longlong)pbVar16;
          bVar26 = *pbVar16;
          pbVar16 = pbVar16 + -1;
        } while (*(char *)(lVar11 + 0x20 + (ulonglong)bVar26) != '\x01');
        lVar11 = unaff_RDI[0xf];
        ppbVar17 = &local_70;
        FUN_009d5ed0();
        FUN_009d8cfc(ppbVar17,pbVar16 + (1 - lVar11));
        goto LAB_009dbe96;
      }
    }
    else {
      lVar11 = FUN_009dcfc8(0x120,0x11);
      *(longlong *)(lVar11 + 0x10) = *(longlong *)(*unaff_RDI + 0x168) - lVar11;
      iVar7 = *(int *)(*(longlong *)(*(longlong *)(*unaff_RDI + 0x160) + 8 + uVar15) +
                      *(longlong *)(*unaff_RDI + 0x160) + uVar15);
    }
    if ((iVar7 != 0) && (iVar7 != 0x1b)) {
      lVar11 = *(longlong *)*local_48;
      pbVar16 = (byte *)(*plVar1 + -1);
      do {
        *plVar1 = (longlong)pbVar16;
        bVar26 = *pbVar16;
        pbVar16 = pbVar16 + -1;
      } while (*(char *)(lVar11 + 0x20 + (ulonglong)bVar26) != '\x01');
      lVar11 = unaff_RDI[0xf];
      ppbVar17 = &local_70;
      FUN_009d5ed0();
      FUN_009d8cfc(ppbVar17,pbVar16 + (1 - lVar11));
LAB_009dbe96:
      if (((ulonglong)local_70 & 1) != 0) {
        operator_delete(ppbVar17);
      }
      return (byte *)0x0;
    }
  }
LAB_009dc03c:
  lVar12 = FUN_009d8a9c();
  *(int *)(lVar12 + 0x10) = iVar22;
  lVar11 = *unaff_RDI;
  uVar19 = *(uint *)(lVar11 + 0x28);
  *(byte *)(lVar12 + 0x14) = (byte)(uVar19 >> 0x14) & 1;
  unaff_RDI[0x14] = lVar8 - lVar2;
  unaff_RDI[0x15] = local_58;
  *(byte *)(unaff_RDI + 0x16) = local_31;
  if (*(uint *)(unaff_RDI + 0x12) < *(uint *)(unaff_RDI + 0x13)) {
    *(uint *)(unaff_RDI + 0x12) = *(uint *)(unaff_RDI + 0x13);
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x94) = local_3c;
  *(undefined4 *)(unaff_RDI + 0x13) = local_38;
  pbVar16 = (byte *)CONCAT71((uint7)(uint3)((uint)local_38 >> 8),1);
  if (iVar22 < 1) {
    return pbVar16;
  }
  if ((uVar19 >> 0x17 & 1) != 0) {
    exception_object = (_Unwind_Exception *)(longlong)(iVar22 + -1);
    if ((_Unwind_Exception *)(*(longlong *)(lVar11 + 0x180) - *(longlong *)(lVar11 + 0x178) >> 4) <=
        exception_object) {
      std::__vector_base_common<true>::__throw_out_of_range();
      if (((ulonglong)local_70 & 1) != 0) {
        operator_delete(exception_object);
      }
      __Unwind_Resume(exception_object);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *(longlong *)(*(longlong *)(lVar11 + 0x178) + 8 + (longlong)exception_object * 0x10) =
         ~unaff_RDI[0xf] + unaff_RDI[0x11];
  }
  if (iVar22 < 0x20) {
    *(uint *)((longlong)unaff_RDI + 0x24) =
         *(uint *)((longlong)unaff_RDI + 0x24) | 1 << ((char)iVar22 - 1U & 0x1f);
    return pbVar16;
  }
  return pbVar16;
code_r0x009dba93:
  *plVar1 = (longlong)(pbVar20 + (longlong)(pbVar25 + 3));
  pbVar25 = pbVar25 + 1;
  if (pbVar9 + (-2 - (longlong)pbVar20) == pbVar25) goto LAB_009dbaa3;
  goto LAB_009dba84;
code_r0x009db3ac:
  *plVar1 = (longlong)(pbVar20 + 2 + (longlong)pbVar24);
  pbVar24 = pbVar24 + 1;
  if (pbVar9 + ~(ulonglong)pbVar20 == pbVar24) goto LAB_009db3bc;
  goto LAB_009db397;
code_r0x009db62f:
  *plVar1 = (longlong)(pbVar20 + (longlong)(pbVar25 + 3));
  pbVar25 = pbVar25 + 1;
  pbVar9 = pbVar24;
  if (pbVar24 + (-2 - (longlong)pbVar20) == pbVar25) goto LAB_009db642;
  goto LAB_009db620;
code_r0x009db6a7:
  *plVar1 = (longlong)(pbVar20 + 2 + (longlong)pbVar25);
  pbVar25 = pbVar25 + 1;
  pbVar9 = pbVar24;
  if (pbVar24 + ~(ulonglong)pbVar20 == pbVar25) goto LAB_009db6ba;
  goto LAB_009db698;
}


