// Function: FUN_017658e0
// Address: 017658e0
// Size: 1558 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01765ba0) */
/* WARNING: Removing unreachable block (ram,0x01765c98) */
/* WARNING: Removing unreachable block (ram,0x01765ca5) */
/* WARNING: Removing unreachable block (ram,0x01765a59) */
/* WARNING: Removing unreachable block (ram,0x01765a62) */
/* WARNING: Removing unreachable block (ram,0x017659ed) */
/* WARNING: Removing unreachable block (ram,0x017659f6) */
/* WARNING: Removing unreachable block (ram,0x01765b53) */
/* WARNING: Removing unreachable block (ram,0x01765dd9) */

undefined8 * FUN_017658e0(pthread_key_t param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar12;
  longlong lVar13;
  longlong local_40;
  char local_38;
  
  lVar2 = local_40;
  lVar11 = *unaff_RSI;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar11 = *unaff_RSI;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar11 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  lVar11 = *(longlong *)(lVar11 + 0x60);
  if (lVar11 != 0) {
    FUN_00d50b00();
  }
  lVar6 = *unaff_RSI;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar6 = *unaff_RSI;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  lVar6 = *(longlong *)(lVar6 + 0x58);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01770f00();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01736e70();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_02572358;
  (*DAT_02572370)();
  if (*(int *)(local_40 + 0xc) < 1) {
    lVar7 = 0;
    bVar12 = false;
  }
  else {
    lVar13 = 0;
    bVar12 = false;
    lVar10 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar13 * 8);
      lVar7 = lVar2;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pVar9 = (pthread_key_t)lVar7;
      FUN_01779830();
      if (local_40 == lVar10) {
        lVar7 = lVar10;
        if ((!bVar12) && (local_40 != 0)) {
          if (local_38 != '\0') goto LAB_01765b43;
          FUN_00d50b00();
LAB_01765bb0:
          bVar12 = true;
          lVar7 = lVar10;
        }
        bVar3 = bVar12;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar7 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar12) && (lVar10 != 0)) {
            FUN_00d50b20();
            lVar10 = local_40;
            goto LAB_01765bb0;
          }
        }
        else {
          if ((bVar12) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
LAB_01765b43:
          bVar3 = true;
        }
      }
      bVar12 = bVar3;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779ad0();
      if (*param_2 == 0) {
        if (lVar13 == 0) {
          pvVar5 = _pthread_getspecific(pVar9);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01779a60(DAT_02390124);
        }
        else {
          lVar10 = lVar2;
          pvVar5 = _pthread_getspecific((pthread_key_t)lVar2);
          pVar9 = (pthread_key_t)lVar10;
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_01739620();
          if (cVar4 == '\0') {
            pvVar5 = _pthread_getspecific(pVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01779a60(0);
          }
          else {
            pvVar5 = _pthread_getspecific(pVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar4 = FUN_01739960();
            if (cVar4 == '\0') {
              pvVar5 = _pthread_getspecific(0x2802558);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01779a60(DAT_0239428c);
            }
            else {
              pvVar5 = _pthread_getspecific(0x2802558);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01779a60(DAT_0239011c);
            }
          }
        }
      }
      else {
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01779a60(*(undefined4 *)(*(longlong *)(*param_2 + 0x10) + lVar13 * 4));
      }
      local_38 = '\0';
      FUN_00d21140();
      lVar13 = lVar13 + 1;
      lVar10 = lVar7;
      local_40 = lVar7;
    } while (lVar13 < *(int *)(lVar2 + 0xc));
  }
  *unaff_RDI = puVar8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar12) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


