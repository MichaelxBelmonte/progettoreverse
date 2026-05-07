// Function: FUN_00625a00
// Address: 00625a00
// Size: 3280 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00626686) */
/* WARNING: Removing unreachable block (ram,0x0062668f) */
/* WARNING: Removing unreachable block (ram,0x00626620) */
/* WARNING: Removing unreachable block (ram,0x0062662c) */
/* WARNING: Removing unreachable block (ram,0x0062632a) */
/* WARNING: Removing unreachable block (ram,0x00626336) */
/* WARNING: Removing unreachable block (ram,0x00626067) */
/* WARNING: Removing unreachable block (ram,0x00626073) */
/* WARNING: Removing unreachable block (ram,0x0062605a) */
/* WARNING: Removing unreachable block (ram,0x00626007) */
/* WARNING: Removing unreachable block (ram,0x00626010) */
/* WARNING: Removing unreachable block (ram,0x00625e2e) */
/* WARNING: Removing unreachable block (ram,0x00625e37) */
/* WARNING: Removing unreachable block (ram,0x00625f5a) */
/* WARNING: Removing unreachable block (ram,0x00625f63) */
/* WARNING: Removing unreachable block (ram,0x0062656d) */
/* WARNING: Removing unreachable block (ram,0x0062657a) */
/* WARNING: Removing unreachable block (ram,0x006262a3) */
/* WARNING: Removing unreachable block (ram,0x006262af) */
/* WARNING: Removing unreachable block (ram,0x00626487) */
/* WARNING: Removing unreachable block (ram,0x00626493) */
/* WARNING: Removing unreachable block (ram,0x006264e5) */
/* WARNING: Removing unreachable block (ram,0x006264ee) */
/* WARNING: Removing unreachable block (ram,0x00626637) */
/* WARNING: Removing unreachable block (ram,0x00626640) */
/* WARNING: Removing unreachable block (ram,0x0062669d) */
/* WARNING: Removing unreachable block (ram,0x006266a9) */
/* WARNING: Removing unreachable block (ram,0x006261fa) */
/* WARNING: Removing unreachable block (ram,0x00626203) */
/* WARNING: Removing unreachable block (ram,0x00625bac) */
/* WARNING: Removing unreachable block (ram,0x00625bd0) */
/* WARNING: Removing unreachable block (ram,0x00625a5b) */
/* WARNING: Removing unreachable block (ram,0x00625a64) */
/* WARNING: Removing unreachable block (ram,0x00625eb6) */
/* WARNING: Removing unreachable block (ram,0x00625ec3) */
/* WARNING: Removing unreachable block (ram,0x00625bae) */
/* WARNING: Removing unreachable block (ram,0x00625bd3) */
/* WARNING: Removing unreachable block (ram,0x006263d5) */
/* WARNING: Removing unreachable block (ram,0x006263e1) */
/* WARNING: Removing unreachable block (ram,0x0062615f) */
/* WARNING: Removing unreachable block (ram,0x0062617c) */
/* WARNING: Removing unreachable block (ram,0x00626161) */
/* WARNING: Removing unreachable block (ram,0x0062617e) */

undefined8 FUN_00625a00(undefined8 param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong *unaff_RDI;
  undefined8 uVar9;
  int iVar10;
  bool bVar11;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  longlong local_68;
  char local_60;
  int local_50;
  longlong local_40;
  char local_38;
  
  lVar1 = local_68;
  cVar2 = FUN_00742da0();
  if (cVar2 == '\0') {
LAB_00625ab1:
    uVar9 = 0;
  }
  else {
    (**(code **)(*unaff_RDI + 0x5d8))();
    if (local_60 == '\0') {
      if (local_68 == 0) goto LAB_00625ab1;
      FUN_00d50b00();
    }
    else if (local_68 == 0) goto LAB_00625ab1;
    FUN_006f4810();
    FUN_002eacb0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_003231a0();
    if ((local_60 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    uVar9 = 0;
    if (local_68 != 0) {
      local_68 = 0;
      local_50 = -1;
      iVar10 = -1;
      while( true ) {
        lVar5 = (longlong)local_50;
        local_50 = local_50 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_50) break;
        lVar8 = *(longlong *)(lVar1 + 0x10);
        local_68 = *(longlong *)(lVar8 + 8 + lVar5 * 8);
        pvVar6 = _pthread_getspecific((pthread_key_t)lVar8);
        pVar7 = (pthread_key_t)lVar8;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6a50();
        if (local_40 == 0) {
          bVar11 = false;
        }
        else {
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6a50();
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6a50();
          bVar11 = local_98 != 0;
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (bVar11) {
LAB_00625e7d:
          FUN_000be170();
          goto LAB_00625e86;
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        iVar4 = *(int *)(local_40 + 0xc);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (iVar4 != 0) goto LAB_00625e7d;
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6a50();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        local_38 = '\0';
        iVar4 = FUN_00d237a0();
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        iVar3 = iVar10;
        if (iVar4 < iVar10) {
          iVar3 = iVar4;
        }
        bVar11 = iVar10 == -1;
        iVar10 = iVar3;
        local_40 = local_68;
        if (bVar11) {
          iVar10 = iVar4;
        }
      }
      lVar5 = lVar1;
      FUN_000be170();
      pVar7 = (pthread_key_t)lVar5;
      if (iVar10 == -1) {
LAB_00625e86:
        uVar9 = 0;
      }
      else {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6a50();
        if (local_68 != 0) {
          FUN_00d50b00();
        }
        uVar9 = 1;
        if (param_2 != '\0') {
          if (iVar10 < 1) {
            bVar11 = false;
            local_88 = 0;
          }
          else {
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e6160();
            local_88 = *(longlong *)(*(longlong *)(local_68 + 0x10) + (ulonglong)(iVar10 - 1) * 8);
            bVar11 = local_88 == 0;
            if (bVar11) {
              local_88 = 0;
            }
            else {
              FUN_00d50b00();
            }
            bVar11 = !bVar11;
          }
          FUN_006f3f00();
          FUN_0078a130();
          if (local_68 != 0) {
            FUN_00d50b00();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_68 == 0) {
            uVar9 = 0;
            if ((bVar11) && (local_88 != 0)) {
              FUN_00d50b20();
              uVar9 = 0;
            }
          }
          else {
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            lVar5 = DAT_02725a98;
            if (DAT_02725a98 != 0) {
              FUN_00d50b00();
            }
            FUN_012e5f80();
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
            local_50 = -1;
            while (local_50 = local_50 + 1, local_50 < *(int *)(lVar1 + 0xc)) {
              pVar7 = (pthread_key_t)*(undefined8 *)(lVar1 + 0x10);
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e7fb0();
              if ((local_38 == '\0') && (local_40 != 0)) {
                FUN_00d50b00();
              }
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e6a50();
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e68b0();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e6520();
              if (local_40 != 0) {
                pvVar6 = _pthread_getspecific(pVar7);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0150fe10();
                pvVar6 = _pthread_getspecific(pVar7);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0150f380();
                if ((local_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                pvVar6 = _pthread_getspecific(pVar7);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e7fb0();
                pvVar6 = _pthread_getspecific(pVar7);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0150f020();
                if ((local_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
            FUN_000be170();
            FUN_006f3f00();
            FUN_0074a910();
            FUN_006f4810();
            FUN_000ba510();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            FUN_002ea230();
            if (local_40 != 0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            FUN_006f4810();
            FUN_002f1240();
            FUN_01bc17d0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if ((bVar11) && (local_88 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        if (local_68 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return uVar9;
}


