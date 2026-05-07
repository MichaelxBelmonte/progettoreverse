// Function: FUN_0052d020
// Address: 0052d020
// Size: 622 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0052d17f) */
/* WARNING: Removing unreachable block (ram,0x0052d188) */
/* WARNING: Removing unreachable block (ram,0x0052d0e7) */
/* WARNING: Removing unreachable block (ram,0x0052d0f0) */

void FUN_0052d020(float param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t in_ECX;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  bool bVar7;
  longlong local_50;
  char local_48;
  float local_3c;
  
  lVar6 = local_50;
  if (param_2 < 2) {
    local_3c = param_1 / DAT_023908e0;
    lVar5 = *(longlong *)(unaff_RSI + 0x110);
    pvVar2 = _pthread_getspecific(in_ECX);
    if (param_2 == 0) {
      if (pvVar2 != (void *)0x0) {
        lVar5 = *(longlong *)(unaff_RSI + 0x110);
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
        }
      }
      pfVar4 = (float *)(lVar5 + 0x58);
    }
    else {
      if (pvVar2 != (void *)0x0) {
        lVar5 = *(longlong *)(unaff_RSI + 0x110);
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
        }
      }
      pfVar4 = (float *)(lVar5 + 0x60);
    }
    (**(code **)(*DAT_02809fc0 + 0x378))(*pfVar4 * local_3c);
    if (local_50 == 0) {
      lVar6 = 0;
      bVar7 = false;
    }
    else {
      bVar7 = true;
      if (local_48 == '\0') {
        FUN_00d50b00();
      }
    }
LAB_0052d194:
    if (lVar6 == 0) {
LAB_0052d1b6:
      FUN_00b34460(local_3c,param_2);
      return;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (!bVar7) {
      FUN_00d50b00();
    }
  }
  else {
    local_3c = param_1;
    if (param_2 != 2) goto LAB_0052d1b6;
    (**(code **)(*DAT_02809fb0 + 0x378))(param_1);
    if (local_50 == 0) {
      bVar7 = false;
      lVar6 = 0;
LAB_0052d1d8:
      lVar5 = DAT_0276ce70;
      if (DAT_0276ce70 != 0) {
        FUN_00d50b00();
      }
      param_2 = 2;
      if (lVar6 == lVar5) {
        if ((local_50 != 0) || (lVar5 == 0)) {
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0052d194;
        }
      }
      else {
        bVar7 = lVar6 != 0;
        lVar6 = lVar5;
        if (local_50 != 0 && bVar7) {
          FUN_00d50b20();
        }
      }
      if (lVar6 == 0) goto LAB_0052d1b6;
    }
    else {
      if (local_48 == '\0') {
        FUN_00d50b00();
      }
      iVar1 = FUN_00d8c7a0();
      if (iVar1 == 0) {
        bVar7 = true;
        goto LAB_0052d1d8;
      }
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  *unaff_RDI = lVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


