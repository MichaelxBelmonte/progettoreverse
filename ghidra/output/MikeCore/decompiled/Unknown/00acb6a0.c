// Function: FUN_00acb6a0
// Address: 00acb6a0
// Size: 1043 bytes
// Class: Unknown


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00acb6a0(void)

{
  byte *pbVar1;
  byte bVar2;
  string sVar3;
  byte *pbVar4;
  int iVar5;
  string *psVar6;
  char *pcVar7;
  string *psVar8;
  ulonglong uVar9;
  byte *pbVar10;
  string *psVar11;
  allocator *unaff_RBX;
  byte *pbVar12;
  longlong lVar13;
  byte *unaff_RDI;
  string *psVar14;
  ulonglong uVar15;
  ulong uVar16;
  byte *in_R9;
  byte local_30;
  
  pbVar4 = *(byte **)(unaff_RDI + 0x18);
  psVar6 = *(string **)(unaff_RDI + 0x20);
  bVar2 = *pbVar4;
  if ((bVar2 & 1) == 0) {
    psVar8 = (string *)(ulonglong)(bVar2 >> 1);
  }
  else {
    psVar8 = *(string **)(pbVar4 + 8);
  }
  if (psVar6 == psVar8) {
    if ((bVar2 & 1) == 0) {
      if (1 < bVar2 >> 1) {
LAB_00acb6fd:
        psVar8 = psVar6 + -1;
        if ((bVar2 & 1) == 0) {
          psVar11 = (string *)(pbVar4 + 1);
          sVar3 = psVar11[(longlong)psVar8];
        }
        else {
          psVar11 = *(string **)(pbVar4 + 0x10);
          sVar3 = psVar11[(longlong)psVar8];
        }
        if (sVar3 == (string)0x2f) {
          psVar14 = psVar6;
          if ((bVar2 & 1) == 0) {
            pbVar12 = pbVar4 + 1;
          }
          else {
            pbVar12 = *(byte **)(pbVar4 + 0x10);
          }
          do {
            if (psVar14 == (string *)((longlong)&MACH_HEADER.magic + 1U)) goto LAB_00acb7cb;
            pbVar10 = pbVar12 + -2 + (longlong)psVar14;
            psVar14 = psVar14 + -1;
          } while (*pbVar10 == 0x2f);
          if (((psVar14 < (string *)((longlong)&MACH_HEADER.magic + 3)) || (*pbVar12 != 0x2f)) ||
             (pbVar12[1] != 0x2f)) {
LAB_00acb9e2:
            *(string **)(unaff_RDI + 0x20) = psVar8;
            if ((DAT_028a0bb8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
              _DAT_028a0ba0 = 0x2e02;
              DAT_028a0ba2 = 0;
              psVar11 = (string *)0x0;
              ___cxa_atexit();
              ___cxa_guard_release();
            }
            std::string::operator=(psVar6,psVar11);
            return;
          }
          if ((bVar2 & 1) == 0) {
            uVar15 = (ulonglong)(bVar2 >> 1);
          }
          else {
            uVar15 = *(ulonglong *)(pbVar4 + 8);
          }
          psVar11 = (string *)0xffffffffffffffff;
          if (2 < uVar15) {
            in_R9 = pbVar12 + uVar15;
            uVar9 = 2;
            do {
              if (pbVar12[uVar9] == 0x2f) {
                pbVar10 = pbVar12 + uVar9;
                break;
              }
              uVar9 = uVar9 + 1;
              pbVar10 = in_R9;
            } while (uVar15 != uVar9);
            psVar11 = (string *)0xffffffffffffffff;
            if (pbVar10 != in_R9) {
              psVar11 = (string *)(pbVar10 + -(longlong)pbVar12);
            }
          }
          if (psVar11 != psVar14) goto LAB_00acb9e2;
        }
      }
    }
    else if (1 < *(ulonglong *)(pbVar4 + 8)) goto LAB_00acb6fd;
  }
LAB_00acb7cb:
  if (psVar6 == (string *)((longlong)&MACH_HEADER.magic + 2)) {
    pbVar12 = *(byte **)(pbVar4 + 0x10);
    pbVar10 = pbVar4 + 1;
    if ((bVar2 & 1) != 0) {
      pbVar10 = pbVar12;
    }
    if ((*pbVar10 != 0x2f) || (psVar11 = (string *)0xffffffffffffffff, pbVar10[1] != 0x2f))
    goto LAB_00acb835;
  }
  else {
    if (psVar6 < &MACH_HEADER.cputype) {
      if (psVar6 != (string *)0x0) {
        pbVar12 = *(byte **)(pbVar4 + 0x10);
        goto LAB_00acb835;
      }
    }
    else {
      pbVar12 = *(byte **)(pbVar4 + 0x10);
      in_R9 = pbVar4 + 1;
      if ((bVar2 & 1) != 0) {
        in_R9 = pbVar12;
      }
      if (((*in_R9 == 0x2f) && (in_R9[1] == 0x2f)) && (in_R9[2] != 0x2f)) {
        if ((bVar2 & 1) == 0) {
          uVar15 = (ulonglong)(bVar2 >> 1);
        }
        else {
          uVar15 = *(ulonglong *)(pbVar4 + 8);
        }
        psVar8 = (string *)0xffffffffffffffff;
        if (2 < uVar15) {
          lVar13 = uVar15 - 3;
          pbVar12 = in_R9 + 2;
          do {
            pbVar10 = in_R9 + uVar15;
            if (lVar13 == 0) break;
            lVar13 = lVar13 + -1;
            pbVar1 = pbVar12 + 1;
            pbVar10 = pbVar12 + 1;
            pbVar12 = pbVar10;
          } while (*pbVar1 != 0x2f);
          psVar8 = (string *)0xffffffffffffffff;
          if (pbVar10 != in_R9 + uVar15) {
            psVar8 = (string *)(pbVar10 + -(longlong)in_R9);
          }
        }
        psVar11 = (string *)0xffffffffffffffff;
        if (psVar8 < psVar6) {
          psVar11 = psVar8;
        }
        goto LAB_00acb84f;
      }
LAB_00acb835:
      pbVar10 = pbVar4 + 1;
      if ((bVar2 & 1) != 0) {
        pbVar10 = pbVar12;
      }
      if (*pbVar10 == 0x2f) {
        psVar11 = (string *)0x0;
        goto LAB_00acb84f;
      }
    }
    psVar11 = (string *)0xffffffffffffffff;
  }
LAB_00acb84f:
  uVar16 = (ulong)in_R9;
  psVar8 = psVar11 + 1;
  psVar6 = psVar6 + 1;
  if ((bVar2 & 1) == 0) {
LAB_00acb860:
    if (psVar6 != (string *)((longlong)&MACH_HEADER.magic + 1)) {
      if (-(longlong)psVar11 + (longlong)psVar6 != 2) goto code_r0x00acb870;
      pbVar12 = *(byte **)(pbVar4 + 0x10);
joined_r0x00acb8d4:
      if (psVar8 == (string *)((longlong)&MACH_HEADER.magic + 2)) goto LAB_00acb8d6;
      goto LAB_00acb8f2;
    }
LAB_00acb8ab:
    pbVar12 = *(byte **)(pbVar4 + 0x10);
    psVar6 = (string *)0xffffffffffffffff;
    psVar8 = (string *)0x0;
LAB_00acb907:
    if ((bVar2 & 1) == 0) {
      pbVar12 = pbVar4 + 1;
      psVar11 = (string *)(ulonglong)(bVar2 >> 1);
    }
    else {
      psVar11 = *(string **)(pbVar4 + 8);
    }
    if (psVar6 < psVar11) {
      psVar11 = psVar8;
    }
    do {
      psVar14 = psVar11;
      psVar6 = (string *)0x0;
      if (psVar14 == (string *)0x0) goto LAB_00acb95b;
      psVar11 = psVar14 + -1;
    } while ((pbVar12 + -1)[(longlong)psVar14] != 0x2f);
    if ((psVar11 != (string *)0xffffffffffffffff) &&
       ((psVar6 = psVar14, psVar11 != (string *)((longlong)&MACH_HEADER.magic + 1) ||
        (*pbVar12 != 0x2f)))) goto LAB_00acb95b;
  }
  else {
    do {
      if (psVar6 == (string *)((longlong)&MACH_HEADER.magic + 1)) goto LAB_00acb8ab;
      if (-(longlong)psVar11 + (longlong)psVar6 == 2) {
        pbVar12 = *(byte **)(pbVar4 + 0x10);
        goto joined_r0x00acb8d4;
      }
      psVar14 = psVar6 + *(longlong *)(pbVar4 + 0x10) + -2;
      psVar6 = psVar6 + -1;
    } while (*psVar14 == (string)0x2f);
LAB_00acb89f:
    psVar8 = psVar6;
    pbVar12 = *(byte **)(pbVar4 + 0x10);
    if (psVar8 != (string *)((longlong)&MACH_HEADER.magic + 2)) {
LAB_00acb8f2:
      psVar6 = psVar8 + -1;
      pbVar10 = pbVar4 + 1;
      if ((bVar2 & 1) != 0) {
        pbVar10 = pbVar12;
      }
      if ((pbVar10 + -1)[(longlong)psVar8] == 0x2f) goto LAB_00acb95b;
      goto LAB_00acb907;
    }
LAB_00acb8d6:
    pbVar10 = pbVar4 + 1;
    if ((bVar2 & 1) != 0) {
      pbVar10 = pbVar12;
    }
    if ((*pbVar10 != 0x2f) || (pbVar10[1] != 0x2f)) goto LAB_00acb8f2;
    psVar8 = (string *)((longlong)&MACH_HEADER.magic + 2);
  }
  psVar6 = (string *)0x0;
LAB_00acb95b:
  *(string **)(unaff_RDI + 0x20) = psVar6;
  psVar8 = psVar8 + -(longlong)psVar6;
  std::string::string(psVar8,psVar6,(ulong)pbVar4,uVar16,unaff_RBX);
  std::string::operator=(psVar8,psVar6);
  if ((local_30 & 1) != 0) {
    operator_delete(psVar8);
  }
  if ((*unaff_RDI & 1) == 0) {
    if (*unaff_RDI >> 1 != 1) {
      return;
    }
  }
  else if (*(longlong *)(unaff_RDI + 8) != 1) {
    return;
  }
  pcVar7 = "/";
  iVar5 = std::string::compare
                    (0x1ff120e,0xffffffff,(char *)((longlong)&MACH_HEADER.magic + 1),uVar16);
  if (iVar5 == 0) {
    std::string::assign(pcVar7);
  }
  return;
code_r0x00acb870:
  pbVar12 = pbVar4 + -1 + (longlong)psVar6;
  psVar6 = psVar6 + -1;
  if (*pbVar12 != 0x2f) goto LAB_00acb89f;
  goto LAB_00acb860;
}


