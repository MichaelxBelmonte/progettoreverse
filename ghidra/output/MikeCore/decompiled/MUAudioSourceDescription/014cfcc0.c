// Function: FUN_014cfcc0
// Address: 014cfcc0
// Size: 1752 bytes
// Class: MUAudioSourceDescription


/* WARNING: Removing unreachable block (ram,0x014d0331) */
/* WARNING: Removing unreachable block (ram,0x014d033d) */
/* WARNING: Removing unreachable block (ram,0x014d0369) */
/* WARNING: Removing unreachable block (ram,0x014d0375) */
/* WARNING: Removing unreachable block (ram,0x014cfe5d) */
/* WARNING: Removing unreachable block (ram,0x014cfe66) */
/* WARNING: Removing unreachable block (ram,0x014cfefe) */
/* WARNING: Removing unreachable block (ram,0x014cff07) */

void FUN_014cfcc0(pthread_key_t param_1)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  void *pvVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  pthread_key_t pVar14;
  ulonglong uVar15;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar16;
  int iVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  
  (**(code **)(*unaff_RDI + 0x378))();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 == 0) goto LAB_014cfdaf;
  (**(code **)(*unaff_RDI + 0x378))();
  lVar12 = *unaff_RSI;
  if (lVar12 == local_58) {
    if (((char)unaff_RSI[1] != '\0') || (local_58 == 0)) goto LAB_014cfd9b;
    if (local_50 == '\0') {
      FUN_00d50b00();
      goto LAB_014cfd96;
    }
  }
  else {
    lVar6 = unaff_RSI[1];
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = local_58;
      if (((char)lVar6 != '\0') && (lVar12 != 0)) {
        FUN_00d50b20();
      }
LAB_014cfd96:
      *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_014cfd9b:
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_014cfdaf;
    }
    *unaff_RSI = local_58;
    if (((char)lVar6 != '\0') && (lVar12 != 0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_014cfdaf:
  pvVar10 = _pthread_getspecific(param_1);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar18 = (float)FUN_0132db90();
  if (*(int *)(unaff_RDI[0x21] + 0xc) != 0) {
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d790();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    dVar7 = DAT_0238fee8;
    uVar1 = *(uint *)(local_58 + 0x30);
    uVar16 = (ulonglong)(int)uVar1;
    dVar2 = DAT_0238fee8 / *(double *)(local_58 + 0x38);
    uVar11 = (**(code **)(*unaff_RDI + 0x388))();
    uVar15 = (uVar11 | uVar16) >> 0x20;
    if (uVar15 == 0) {
      uVar16 = (uVar11 & 0xffffffff) % (ulonglong)uVar1;
      iVar9 = (int)((uVar11 & 0xffffffff) / (ulonglong)uVar1);
    }
    else {
      iVar9 = (int)((longlong)uVar11 / (longlong)uVar16);
      uVar16 = (longlong)uVar11 % (longlong)uVar16;
    }
    lVar12 = (**(code **)(*unaff_RDI + 0x380))(uVar15,uVar16);
    FUN_00c8e690();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    iVar17 = 0;
    if (iVar9 < -1) {
      local_48 = 0;
      bVar4 = false;
      local_40 = 0;
      bVar5 = false;
    }
    else {
      uVar16 = 1;
      if (1 < (int)(iVar9 + 2U)) {
        uVar16 = (ulonglong)(iVar9 + 2U);
      }
      uVar11 = 0;
      bVar5 = false;
      local_40 = 0;
      bVar4 = false;
      local_48 = 0;
      do {
        dVar3 = (double)(iVar17 + lVar12) * (dVar7 / (double)(int)uVar1);
        uVar19 = FUN_014c36d0((float)dVar3,(int)dVar3);
        if (local_58 == local_48) {
          if ((bVar4) || (local_58 == 0)) {
            if ((local_50 != '\0') && (local_58 != 0)) {
              uVar19 = FUN_00d50b20();
            }
          }
          else {
            bVar4 = true;
            if (local_50 == '\0') {
              uVar19 = FUN_00d50b00();
            }
          }
        }
        else if (local_50 == '\0') {
          if (local_58 != 0) {
            uVar19 = FUN_00d50b00();
          }
          if ((!bVar4) || (local_48 == 0)) goto LAB_014d0090;
          uVar19 = FUN_00d50b20();
          local_48 = local_58;
          bVar4 = true;
        }
        else if ((bVar4) && (local_48 != 0)) {
          uVar19 = FUN_00d50b20();
          local_48 = local_58;
          bVar4 = true;
        }
        else {
LAB_014d0090:
          local_48 = local_58;
          bVar4 = true;
        }
        FUN_014c36d0(uVar19,(int)dVar3 + 1);
        if (local_58 == local_40) {
          lVar6 = local_40;
          if ((bVar5) || (local_58 == 0)) {
            bVar8 = bVar5;
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar8 = true;
            if (local_50 == '\0') {
              FUN_00d50b00();
            }
          }
        }
        else if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
          lVar6 = local_58;
          bVar8 = true;
          if (bVar5) {
            if (local_40 == 0) goto LAB_014d0170;
            FUN_00d50b20();
            lVar6 = local_58;
          }
        }
        else if ((bVar5) && (local_40 != 0)) {
          FUN_00d50b20();
          lVar6 = local_58;
          bVar8 = true;
        }
        else {
LAB_014d0170:
          lVar6 = local_58;
          bVar8 = true;
        }
        bVar5 = bVar8;
        local_40 = lVar6;
        fVar20 = 0.0;
        if ((local_48 != 0) && (fVar20 = 0.0, local_40 != 0)) {
          fVar20 = *(float *)(local_48 + 0x28) * fVar18;
          fVar20 = (*(float *)(local_40 + 0x28) * fVar18 - fVar20) *
                   ((float)dVar3 - (float)(int)dVar3) + fVar20;
        }
        *(float *)(*(longlong *)(local_58 + 0x10) + uVar11 * 4) = fVar20;
        uVar11 = uVar11 + 1;
        iVar17 = iVar17 + uVar1;
      } while (uVar16 != uVar11);
    }
    puVar13 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *(undefined1 *)(puVar13 + 7) = 0;
    *(undefined4 *)((longlong)puVar13 + 0x3c) = 0;
    *(undefined2 *)(puVar13 + 8) = 0;
    pVar14 = 0x25dc9e8;
    *puVar13 = &DAT_025dc9e8;
    puVar13[9] = 0;
    puVar13[10] = 0;
    (*DAT_025dca00)();
    pvVar10 = _pthread_getspecific(pVar14);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb950(SUB84((double)(float)dVar2,0));
    pvVar10 = _pthread_getspecific(pVar14);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb890();
    FUN_014bc1d0();
    FUN_00d50b20();
    if ((bVar5) && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar4) && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return;
}


