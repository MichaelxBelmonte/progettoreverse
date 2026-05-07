// Function: FUN_00acb6a0
// Address: 00acb6a0
// Size: 1043 bytes
// Class: Unknown

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
  uint64_t uVar9;
  byte *pbVar10;
  string *psVar11;
  allocator *unaff_RBX;
  byte *pbVar12;
  int64_t lVar13;
  byte *this_ptr;
  string *psVar14;
  uint64_t uVar15;
  ulong uVar16;
  byte *in_R9;
  byte local_30;
  
  pbVar4 = *(byte **)(this_ptr + 0x18);
  psVar6 = *(string **)(this_ptr + 0x20);
  bVar2 = *pbVar4;
  if ((bVar2 & 1) == 0) {
    psVar8 = (string *)(uint64_t)(bVar2 >> 1);
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
          sVar3 = psVar11[(int64_t)psVar8];
        }
        else {
          psVar11 = *(string **)(pbVar4 + 0x10);
          sVar3 = psVar11[(int64_t)psVar8];
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
            if (psVar14 == (string *)((int64_t)&MACH_HEADER.magic + 1U)) goto LAB_00acb7cb;
            pbVar10 = pbVar12 + -2 + (int64_t)psVar14;
            psVar14 = psVar14 + -1;
          } while (*pbVar10 == 0x2f);
          if (((psVar14 < (string *)((int64_t)&MACH_HEADER.magic + 3)) || (*pbVar12 != 0x2f)) ||
             (pbVar12[1] != 0x2f)) {
LAB_00acb9e2:
            *(string **)(this_ptr + 0x20) = psVar8;
            if ((g_028a0bb8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
              g_028a0ba0 = 0x2e02;
              g_028a0ba2 = 0;
              psVar11 = (string *)0x0;
              ___cxa_atexit();
              ___cxa_guard_release();
            }
            std::string::operator=(psVar6,psVar11);
            return;
          }
          if ((bVar2 & 1) == 0) {
            uVar15 = (uint64_t)(bVar2 >> 1);
          }
          else {
            uVar15 = *(uint64_t *)(pbVar4 + 8);
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
              psVar11 = (string *)(pbVar10 + -(int64_t)pbVar12);
            }
          }
          if (psVar11 != psVar14) goto LAB_00acb9e2;
        }
      }
    }
    else if (1 < *(uint64_t *)(pbVar4 + 8)) goto LAB_00acb6fd;
  }
LAB_00acb7cb:
  if (psVar6 == (string *)((int64_t)&MACH_HEADER.magic + 2)) {
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
          uVar15 = (uint64_t)(bVar2 >> 1);
        }
        else {
          uVar15 = *(uint64_t *)(pbVar4 + 8);
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
            psVar8 = (string *)(pbVar10 + -(int64_t)in_R9);
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
    if (psVar6 != (string *)((int64_t)&MACH_HEADER.magic + 1)) {
      if (-(int64_t)psVar11 + (int64_t)psVar6 != 2) goto code_r0x00acb870;
      pbVar12 = *(byte **)(pbVar4 + 0x10);
joined_r0x00acb8d4:
      if (psVar8 == (string *)((int64_t)&MACH_HEADER.magic + 2)) goto LAB_00acb8d6;
      goto LAB_00acb8f2;
    }
LAB_00acb8ab:
    pbVar12 = *(byte **)(pbVar4 + 0x10);
    psVar6 = (string *)0xffffffffffffffff;
    psVar8 = (string *)0x0;
LAB_00acb907:
    if ((bVar2 & 1) == 0) {
      pbVar12 = pbVar4 + 1;
      psVar11 = (string *)(uint64_t)(bVar2 >> 1);
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
    } while ((pbVar12 + -1)[(int64_t)psVar14] != 0x2f);
    if ((psVar11 != (string *)0xffffffffffffffff) &&
       ((psVar6 = psVar14, psVar11 != (string *)((int64_t)&MACH_HEADER.magic + 1) ||
        (*pbVar12 != 0x2f)))) goto LAB_00acb95b;
  }
  else {
    do {
      if (psVar6 == (string *)((int64_t)&MACH_HEADER.magic + 1)) goto LAB_00acb8ab;
      if (-(int64_t)psVar11 + (int64_t)psVar6 == 2) {
        pbVar12 = *(byte **)(pbVar4 + 0x10);
        goto joined_r0x00acb8d4;
      }
      psVar14 = psVar6 + *(int64_t *)(pbVar4 + 0x10) + -2;
      psVar6 = psVar6 + -1;
    } while (*psVar14 == (string)0x2f);
LAB_00acb89f:
    psVar8 = psVar6;
    pbVar12 = *(byte **)(pbVar4 + 0x10);
    if (psVar8 != (string *)((int64_t)&MACH_HEADER.magic + 2)) {
LAB_00acb8f2:
      psVar6 = psVar8 + -1;
      pbVar10 = pbVar4 + 1;
      if ((bVar2 & 1) != 0) {
        pbVar10 = pbVar12;
      }
      if ((pbVar10 + -1)[(int64_t)psVar8] == 0x2f) goto LAB_00acb95b;
      goto LAB_00acb907;
    }
LAB_00acb8d6:
    pbVar10 = pbVar4 + 1;
    if ((bVar2 & 1) != 0) {
      pbVar10 = pbVar12;
    }
    if ((*pbVar10 != 0x2f) || (pbVar10[1] != 0x2f)) goto LAB_00acb8f2;
    psVar8 = (string *)((int64_t)&MACH_HEADER.magic + 2);
  }
  psVar6 = (string *)0x0;
LAB_00acb95b:
  *(string **)(this_ptr + 0x20) = psVar6;
  psVar8 = psVar8 + -(int64_t)psVar6;
  std::string::string(psVar8,psVar6,(ulong)pbVar4,uVar16,unaff_RBX);
  std::string::operator=(psVar8,psVar6);
  if ((local_30 & 1) != 0) {
    operator_delete(psVar8);
  }
  if ((*this_ptr & 1) == 0) {
    if (*this_ptr >> 1 != 1) {
      return;
    }
  }
  else if (*(int64_t *)(this_ptr + 8) != 1) {
    return;
  }
  pcVar7 = "/";
  iVar5 = std::string::compare
                    (0x1ff120e,0xffffffff,(char *)((int64_t)&MACH_HEADER.magic + 1),uVar16);
  if (iVar5 == 0) {
    std::string::assign(pcVar7);
  }
  return;
code_r0x00acb870:
  pbVar12 = pbVar4 + -1 + (int64_t)psVar6;
  psVar6 = psVar6 + -1;
  if (*pbVar12 != 0x2f) goto LAB_00acb89f;
  goto LAB_00acb860;
}

