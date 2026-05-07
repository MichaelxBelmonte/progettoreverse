// Function: FUN_019bf590
// Address: 019bf590
// Size: 1166 bytes
// Class: MUEditorElementView


/* WARNING: Removing unreachable block (ram,0x019bf812) */
/* WARNING: Removing unreachable block (ram,0x019bf79a) */
/* WARNING: Removing unreachable block (ram,0x019bf7a3) */
/* WARNING: Removing unreachable block (ram,0x019bf8a3) */
/* WARNING: Removing unreachable block (ram,0x019bf8ac) */
/* WARNING: Removing unreachable block (ram,0x019bf8fc) */
/* WARNING: Removing unreachable block (ram,0x019bf905) */
/* WARNING: Removing unreachable block (ram,0x019bf679) */
/* WARNING: Removing unreachable block (ram,0x019bf685) */
/* WARNING: Removing unreachable block (ram,0x019bf910) */
/* WARNING: Removing unreachable block (ram,0x019bf919) */
/* WARNING: Removing unreachable block (ram,0x019bf93f) */
/* WARNING: Removing unreachable block (ram,0x019bf94c) */

longlong * FUN_019bf590(longlong param_1,longlong *param_2)

{
  char cVar1;
  void *pvVar2;
  longlong *unaff_RDI;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong local_b0;
  char local_a8;
  longlong local_60;
  char local_58;
  longlong local_48;
  
  cVar1 = FUN_019a9840();
  if (cVar1 == '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar4 = *param_2;
    if ((char)param_2[1] != '\0') {
      *unaff_RDI = lVar4;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(param_2 + 1) = 0;
      return unaff_RDI;
    }
    if (lVar4 != 0) {
LAB_019bf618:
      FUN_00d50b00();
    }
LAB_019bf620:
    *unaff_RDI = lVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    lVar4 = *param_2;
    if (lVar4 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if ((char)param_2[1] == '\0') goto LAB_019bf620;
    }
    else {
      if (1 < *(int *)(lVar4 + 0xc)) {
        FUN_0025e9a0();
        if ((local_a8 == '\0') && (local_b0 != 0)) {
          FUN_00d50b00();
        }
        lVar4 = *param_2;
        if (lVar4 == 0) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          lVar4 = 0;
          bVar5 = false;
          if ((char)param_2[1] == '\0') {
LAB_019bfa09:
            *unaff_RDI = lVar4;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            local_48 = 0;
            goto joined_r0x019bfa18;
          }
        }
        else {
          if (*(int *)(lVar4 + 0xc) < 1) {
            bVar5 = false;
            local_48 = 0;
          }
          else {
            iVar3 = 0;
            local_48 = 0;
            bVar5 = false;
            do {
              pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01274b60();
              if (local_58 == '\0') {
                if (local_60 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = '\0';
              }
              cVar1 = FUN_00d23d70();
              if (local_60 != 0) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              if (cVar1 == '\0') {
                pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01274b60();
                if (local_58 == '\0') {
                  if (local_60 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_58 = '\0';
                }
                FUN_00d21140();
                if (local_60 != 0) {
                  FUN_00d50b20();
                }
                if ((local_58 != '\0') && (local_60 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_48 == 0) {
                  FUN_00243390();
                  local_48 = local_60;
                  param_1 = local_60;
                  if (local_60 == 0) {
                    local_48 = 0;
                  }
                  else {
                    FUN_00d50b00();
                    bVar5 = true;
                  }
                }
                FUN_00d23f50();
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(lVar4 + 0xc));
          }
          FUN_001159b0();
          if (local_48 != 0) {
            *(undefined1 *)(unaff_RDI + 1) = 0;
            if (!bVar5) {
              FUN_00d50b00();
            }
            *unaff_RDI = local_48;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            bVar5 = false;
            goto joined_r0x019bfa18;
          }
          lVar4 = *param_2;
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if ((char)param_2[1] == '\0') {
            if (lVar4 == 0) {
              lVar4 = 0;
            }
            else {
              FUN_00d50b00();
            }
            goto LAB_019bfa09;
          }
        }
        *unaff_RDI = lVar4;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        *(undefined1 *)(param_2 + 1) = 0;
        local_48 = 0;
joined_r0x019bfa18:
        if (local_b0 != 0) {
          FUN_00d50b20();
        }
        if (!bVar5) {
          return unaff_RDI;
        }
        if (local_48 == 0) {
          return unaff_RDI;
        }
        FUN_00d50b20();
        return unaff_RDI;
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if ((char)param_2[1] == '\0') goto LAB_019bf618;
    }
    *unaff_RDI = lVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return unaff_RDI;
}


